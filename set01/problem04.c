//Write a C program to add two numbers using pass by reference.
#include<stdio.h>
void input(int *a, int *b){
    printf("Enter the numbers : ");
    scanf("%d%d", a, b);
}
void add(int a, int b, int *sum){
    *sum = a + b;
}
void output(int a, int b, int sum){
    printf("The sum of %d and %d is %d", a, b, sum);
}
int main(){
    int x,y,z;
    input(&x,&y);
    add(x,y,&z);
    output(x,y,z);
}
