#!/usr/bin/env python3
"""Render focused ComputeUnit JUnit results as CSV and a standalone SVG."""

from __future__ import annotations

import csv
import html
import xml.etree.ElementTree as ET
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
REPORT_DIR = ROOT / "target" / "test-reports"
OUTPUT_DIR = ROOT / "reports"

SUITES = [
    "npu.core.ZeroPadderTest",
    "npu.core.CompactorTest",
    "npu.core.LutProgrammingControllerTest",
    "npu.top.ComputeUnitTest",
    "npu.top.ComputeUnitE2ETest",
    "npu.top.VPUStageTest",
    "npu.top.TPUTopTest",
    "npu.core.GPALUUnitTest",
    "npu.core.QuantActUnitTest",
    "npu.core.VPU1RouteTest",
    "npu.core.RopeUnitTest",
    "npu.core.NormUnitOnlineTest",
    "npu.core.NormUnitDistributedTest",
    "npu.core.memory.LineParamOcmTest",
]


def load_rows() -> list[dict[str, object]]:
    rows: list[dict[str, object]] = []
    for suite in SUITES:
        path = REPORT_DIR / f"TEST-{suite}.xml"
        if not path.exists():
            continue
        root = ET.parse(path).getroot()
        timestamp = root.attrib.get("timestamp", "")
        for case in root.findall("testcase"):
            failed = case.find("failure") is not None or case.find("error") is not None
            rows.append(
                {
                    "suite": suite,
                    "test": case.attrib.get("name", "unnamed"),
                    "status": "FAIL" if failed else "PASS",
                    "duration_s": float(case.attrib.get("time", "0")),
                    "timestamp": timestamp,
                }
            )
    return rows


def write_csv(rows: list[dict[str, object]]) -> Path:
    path = OUTPUT_DIR / "compute-test-results.csv"
    with path.open("w", newline="", encoding="utf-8") as stream:
        writer = csv.DictWriter(
            stream,
            fieldnames=["suite", "test", "status", "duration_s", "timestamp"],
            lineterminator="\n",
        )
        writer.writeheader()
        writer.writerows(rows)
    return path


def shortened(name: str, limit: int = 72) -> str:
    return name if len(name) <= limit else name[: limit - 1] + "…"


def write_svg(rows: list[dict[str, object]]) -> Path:
    path = OUTPUT_DIR / "compute-test-results.svg"
    width = 1280
    left = 520
    right = 140
    top = 112
    row_height = 25
    bottom = 70
    height = top + max(1, len(rows)) * row_height + bottom
    plot_width = width - left - right
    max_duration = max([float(row["duration_s"]) for row in rows] + [1.0])
    passed = sum(row["status"] == "PASS" for row in rows)
    failed = len(rows) - passed
    latest = max(str(row["timestamp"]) for row in rows) if rows else "no JUnit result"

    lines = [
        f'<svg xmlns="http://www.w3.org/2000/svg" width="{width}" height="{height}" viewBox="0 0 {width} {height}">',
        '<rect width="100%" height="100%" fill="#10151d"/>',
        '<style>text{font-family:Inter,system-ui,sans-serif;fill:#edf2f7}'
        '.muted{fill:#9eabb9}.pass{fill:#35c878}.fail{fill:#ef6461}'
        '.grid{stroke:#314052;stroke-width:1}.bar{opacity:.9}</style>',
        '<text x="32" y="40" font-size="24" font-weight="600">ComputeUnit regression results</text>',
        f'<text x="32" y="70" font-size="14" class="muted">{passed}/{len(rows)} passed · {failed} failed · latest {html.escape(latest)}</text>',
        f'<text x="{left}" y="94" font-size="12" class="muted">duration (seconds)</text>',
    ]
    for tick in range(6):
        x = left + plot_width * tick / 5
        seconds = max_duration * tick / 5
        lines.append(f'<line x1="{x:.1f}" y1="{top-10}" x2="{x:.1f}" y2="{height-bottom+4}" class="grid"/>')
        lines.append(f'<text x="{x:.1f}" y="{height-bottom+28}" text-anchor="middle" font-size="11" class="muted">{seconds:.1f}</text>')

    if not rows:
        lines.append('<text x="32" y="145" font-size="16" class="fail">No focused JUnit XML results found.</text>')
    for index, row in enumerate(rows):
        y = top + index * row_height
        duration = float(row["duration_s"])
        bar_width = max(2.0, plot_width * duration / max_duration)
        status_class = "pass" if row["status"] == "PASS" else "fail"
        label = shortened(f'{str(row["suite"]).split(".")[-1]} · {row["test"]}')
        lines.append(f'<text x="32" y="{y+15}" font-size="12">{html.escape(label)}</text>')
        lines.append(f'<rect x="{left}" y="{y+4}" width="{bar_width:.1f}" height="14" rx="2" class="bar {status_class}"/>')
        lines.append(f'<text x="{min(left+bar_width+7, width-right+10):.1f}" y="{y+15}" font-size="11" class="{status_class}">{duration:.3f}s {row["status"]}</text>')
    lines.append(f'<text x="32" y="{height-20}" font-size="11" class="muted">Source: target/test-reports/TEST-*.xml · generated deterministically by scripts/render_compute_test_results.py</text>')
    lines.append("</svg>")
    path.write_text("\n".join(lines) + "\n", encoding="utf-8")
    return path


def main() -> None:
    OUTPUT_DIR.mkdir(parents=True, exist_ok=True)
    rows = load_rows()
    csv_path = write_csv(rows)
    svg_path = write_svg(rows)
    passed = sum(row["status"] == "PASS" for row in rows)
    print(f"Rendered {passed}/{len(rows)} passing tests")
    print(csv_path.relative_to(ROOT))
    print(svg_path.relative_to(ROOT))


if __name__ == "__main__":
    main()
