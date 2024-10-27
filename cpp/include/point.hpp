#ifndef POINT_HPP
#define POINT_HPP

struct Point {
    int x, y;
    
    Point(int x = 0, int y = 0) : x(x), y(y) {}

    bool operator<(const Point& p) const {
        return (y < p.y) || (y == p.y && x < p.x);
    }
};

#endif // POINT_HPP
