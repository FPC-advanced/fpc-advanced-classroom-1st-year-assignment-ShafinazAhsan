/*Write a program to find the distance between two points*/
#include <stdio.h>
#include <math.h>
struct _point {
    float x;
    float y;
};
typedef struct _point Point;
Point input() {
    Point p;
    scanf("%f %f", &p.x, &p.y);
    return p;
}
void dist(Point a, Point b, float *res) {
    *res = sqrt(pow((b.x - a.x), 2) + pow((b.y - a.y), 2));
}
void output(Point a, Point b, float res) {
    printf("The distance between (%.1f, %.1f) and (%.1f, %.1f) is %.4f\n",
           a.x, a.y, b.x, b.y, res);
}
int main() {
    Point point1, point2;
    float distance;
    point1 = input();
    point2 = input();
    dist(point1, point2, &distance);
    output(point1, point2, distance);
    return 0;
}
