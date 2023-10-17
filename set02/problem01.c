/*Write a program to find the area of a triangle.*/
#include<stdio.h>
void input(float *base, float *height){
    printf("Enter number : \n");
    scanf("%f%f", base, height);
}
void find_area(float base, float height, float *area){
    *area=(base*height)/2;
}
void output(float base, float height, float area){
    printf("The area of the triangle with base %f and height %f is %f.", base,height,area);
}
int main(){
    float a,b,c;
    input(&a,&b);
    find_area(a,b,&c);
    output(a,b,c);
    return 0;
}