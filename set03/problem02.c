/*Write a program to find whether the given 3 points form a triangle*/
#include<stdio.h>
#include<math.h>
void input(float *x1,float *y1,float *x2,float *y2,float *x3,float *y3){
    printf("Enter the points: \n");
    scanf("%f%f%f%f%f%f", x1,y1,x2,y2,x3,y3);
}
int is_triangle(float x1, float y1, float x2, float y2, float x3, float y3) {
    int result;
    if ((x1 == x2 && x2 == x3) || (y1 == y2 && y2 == y3)) {
        result = 0; 
    } else {
        float slope1 = (y2 - y1) / (x2 - x1);
        float slope2 = (y3 - y2) / (x3 - x2);
        float slope3 = (y3 - y1) / (x3 - x1);
        if (slope1 != slope2 && slope1 != slope3 && slope2 != slope3) {
            result = 1;  
        } else {
            result = 0;  
        }
    }
    return result;
}
void output(float x1,float y1,float x2, float y2, float x3,float y3,int result){
    if(result){
        printf("The points (%f,%f),(%f,%f) and (%f,%f) form a triangle",x1,y1,x2,y2,x3,y3);
    }
    else{
        printf("The points (%f,%f),(%f,%f) and (%f,%f) does not form a triangle",x1,y1,x2,y2,x3,y3);
    }
}
int main(){
    float x1,y1,x2,y2,x3,y3;
    int result;
    input(&x1,&y1,&x2,&y2,&x3,&y3);
    result=is_triangle(x1,y1,x2,y2,x3,y3);
    output(x1,y1,x2,y2,x3,y3,result);
    return 0;
}