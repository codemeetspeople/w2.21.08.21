#include <stdio.h>
#include <math.h>

typedef struct {
    double x;
    double y;
} Point;

void pointPrint(Point a) {
    printf("(%g, %g)", a.x, a.y);
}

int pointEqual(Point a, Point b) {
    return a.x == b.x && a.y == b.y;
}

double pointDistance(Point a, Point b) {
    return hypot(a.x-b.x, a.y-b.y);
}

void pointIncrement(Point *this, Point other) {
    this->x += other.x;
    this->y += other.y;
}

Point pointSum(Point a, Point b) {
    Point sum = a;

    pointIncrement(&sum, b);
    return sum;
}

int main() {
    Point a = {4.0, 3.0};
    Point b = {1.0, 5.0};
    Point c = pointSum(a, b);

    pointPrint(c);
    printf("\n");

    return 0;
}
