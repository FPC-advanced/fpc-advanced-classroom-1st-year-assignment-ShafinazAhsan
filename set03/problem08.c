/*Write a program to find the perimeter of a polygon*/
#include<stdio.h>
#include<math.h>
typedef struct point{
    float x,y;
} Point;
typedef struct polygon{
    int sides;
    Point p[100];
    float perimeter;
} Polygon;
int input_n() {
    int sides;
    printf("Enter the number of sides of the polygon: ");
    scanf("%d", &sides);
    return sides;
}
Point input_point(char *d) {
    Point p;
    printf("%s", d);
    scanf("%f %f", &p.x, &p.y);
    return p;
}
int input_polygon(Polygon *p) {
    p->sides = input_n();
    int i;
    for (i = 0; i < p->sides; i++) {
        char dd[50];
        sprintf(dd, "Enter the coordinates of point %d (x,y): ", i + 1);
        p->p[i] = input_point(dd);
    }
    return p->sides;
}
float find_distance(Point a, Point b) {
    return sqrt(pow((b.x - a.x), 2) + pow((b.y - a.y), 2));
}
void find_perimeter(Polygon *p) {
    float perimeter = 0.0;
    int i;
    for (i = 0; i < p->sides; i++) {
        int next = (i + 1) % p->sides;
        perimeter += find_distance(p->p[i], p->p[next]);
    }
    p->perimeter = perimeter;
}
void output(Polygon p) {
    printf("The perimeter of the polygon is %.6f\n", p.perimeter);
}
int main() {
    Polygon poly;
    int sides = input_polygon(&poly);
    if (sides < 3) {
        printf("invalid\n");
        return 1;
    }
    find_perimeter(&poly);
    output(poly);
    return 0;
}