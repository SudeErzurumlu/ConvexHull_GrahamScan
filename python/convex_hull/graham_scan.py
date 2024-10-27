from .point import Point
from typing import List

def orientation(p: Point, q: Point, r: Point) -> int:
    val = (q.y - p.y) * (r.x - q.x) - (q.x - p.x) * (r.y - q.y)
    return 1 if val > 0 else -1 if val < 0 else 0

def graham_scan(points: List[Point]) -> List[Point]:
    points.sort()
    hull = [points[0]]

    # Main loop
    for point in points:
        # Process each point
        pass

    return hull
