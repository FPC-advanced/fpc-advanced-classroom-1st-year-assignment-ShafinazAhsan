/*Write a program to find the triangle with the smallest area in n given triangles.*/
#include <stdio.h>
typedef struct _triangle {
    float base, altitude, area;
} Triangle;
int input_n() {
    int n;
    printf("Enter the number of triangles: ");
    scanf("%d", &n);
    return n;
}
Triangle input_triangle() {
    Triangle t;
    printf("Enter the base: ");
    scanf("%f", &t.base);
    printf("Enter the altitude: ");
    scanf("%f", &t.altitude);
    return t;
}
void input_n_triangles(int n, Triangle t[n]) {
    for (int i = 0; i < n; i++) {
        printf("Enter triangle %d:\n", i + 1);
        t[i] = input_triangle();
    }
}
void find_area(Triangle *t) {
    t->area = (t->base * t->altitude) / 2;  
}
void find_n_areas(int n, Triangle t[n]) {
    for (int i = 0; i < n; i++) {
        find_area(&t[i]);
    }
}
Triangle find_smallest_triangle(int n, Triangle t[n]) {
    Triangle smallest = t[0];
    for (int i = 1; i < n; i++) {
        if (t[i].area < smallest.area) {
            smallest = t[i];
        }
    }
    return smallest;
}
void output(int n, Triangle t[n], Triangle smallest) {
    printf("Triangles and their areas:\n");
    for (int i = 0; i < n; i++) {
        printf("Triangle %d - Base: %f, Altitude: %f, Area: %f\n", i + 1, t[i].base, t[i].altitude, t[i].area);
    }
    printf("The triangle with the smallest area:\n");
    printf("Base: %f, Altitude: %f, Area: %f\n", smallest.base, smallest.altitude, smallest.area);
}
int main() {
    int n;
    n = input_n();
    Triangle triangles[n];
    input_n_triangles(n, triangles);
    find_n_areas(n, triangles);
    Triangle smallest = find_smallest_triangle(n, triangles);
    output(n, triangles, smallest);
    return 0;
}
