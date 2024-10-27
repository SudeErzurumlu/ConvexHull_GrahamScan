from convex_hull.graham_scan import graham_scan
from convex_hull.point import Point

if __name__ == "__main__":
    points = [Point(0, 0), Point(1, 1), Point(2, 2)]
    hull = graham_scan(points)
    for p in hull:
        print(f"({p.x}, {p.y})")
