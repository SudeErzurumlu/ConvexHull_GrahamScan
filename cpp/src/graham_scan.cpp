#include "graham_scan.hpp"
#include <algorithm>
#include <stack>

int orientation(const Point& p, const Point& q, const Point& r) {
    int val = (q.y - p.y) * (r.x - q.x) - (q.x - p.x) * (r.y - q.y);
    return (val > 0) ? 1 : (val < 0) ? -1 : 0;
}

std::vector<Point> grahamScan(std::vector<Point>& points) {
    std::sort(points.begin(), points.end());
    std::stack<Point> hull;
    hull.push(points[0]);

    // Main loop
    for (const auto& point : points) {
        // Process each point
    }

    return std::vector<Point>(hull.begin(), hull.end());
}
