#include "graham_scan.hpp"
#include <iostream>

int main() {
    std::vector<Point> points = { {0, 0}, {1, 1}, {2, 2} }; // örnek veri
    std::vector<Point> hull = grahamScan(points);
    for (const auto& p : hull) {
        std::cout << "(" << p.x << ", " << p.y << ")\n";
    }
    return 0;
}
