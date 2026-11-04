import json
import sys

LIBRARY_UNITS = {"sce1", "sce2"}

try:
    with open("report.json", "r") as f:
        data = json.load(f)
except FileNotFoundError:
    print("Error: \"report.json\" not found. Please run \"./scripts/checks.sh --report\" first to generate the report file.")
    sys.exit(1)


def totals(units):
    total_code = sum(int(u["measures"].get("total_code", 0)) for u in units)
    matched_code = sum(int(u["measures"].get("matched_code", 0)) for u in units)
    total_funcs = sum(int(u["measures"].get("total_functions", 0)) for u in units)
    matched_funcs = sum(int(u["measures"].get("matched_functions", 0)) for u in units)
    return total_code, matched_code, total_funcs, matched_funcs


def percent(part, whole):
    return 100.0 * part / whole if whole else 0.0


def show(title, units):
    total_code, matched_code, total_funcs, matched_funcs = totals(units)
    print(f"{title}:")
    print(f"  - Matched functions: {matched_funcs} / {total_funcs} ({percent(matched_funcs, total_funcs):.2f}%)")
    print(f"  - Matched code:      {matched_code / 1024:.2f} KiB / {total_code / 1024:.2f} KiB ({percent(matched_code, total_code):.2f}%)\n")


units = [u for u in data["units"] if int(u["measures"].get("total_functions", 0)) > 0]
game = [u for u in units if u["name"] not in LIBRARY_UNITS]
libs = [u for u in units if u["name"] in LIBRARY_UNITS]

show("Game code", game)
show("SDK libraries (sce1/sce2)", libs)
show("Everything", units)

if "--categories" in sys.argv:
    categories = {}
    for u in game:
        category = (u.get("metadata", {}).get("progress_categories") or ["other"])[0]
        categories.setdefault(category, []).append(u)

    print(f"{'category':<14}{'functions':>14}{'code':>10}")

    for name, members in sorted(categories.items()):
        total_code, matched_code, total_funcs, matched_funcs = totals(members)
        print(f"{name:<14}{matched_funcs:>6} / {total_funcs:<5}{percent(matched_code, total_code):>9.1f}%")
