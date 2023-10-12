//2. Write a C program to add two numbers.
#include<stdio.h>
int main(void){
    int a, b, sum;
    printf("Enter the numbers : ");
    scanf("%d%d", &a, &b);
    sum = a + b;
    printf("Sum : %d\n", sum);
    return 0;
}