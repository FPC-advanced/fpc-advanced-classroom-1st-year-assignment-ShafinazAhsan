/*Write a program to find area of a triangle.*/
#include<stdio.h>
typedef struct _triangle{
    float base, altitude, area;
}Triangle;
Triangle input_trinagle(){
    Triangle t;
    printf("Enter the base : ");
    scanf("%f", &t.base);
    printf("Enter the altitudec : ");
    scanf("%f", &t.altitude);
    return t;
}
void find_area(Triangle *t){
    t->area=(t->base+t->altitude)/2;
}
void output(Triangle t){
    printf("The area of teriangle with base = %f and altitude = %f is %f", t.base,t.altitude,t.area);
}
int main(){
    Triangle tri;
    tri=input_trinagle();
    find_area(&tri);
    output(tri);
    return 0;
}