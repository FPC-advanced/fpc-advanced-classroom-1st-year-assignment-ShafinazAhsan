/*Write a C program to compare three numbers using pass by reference.*/
#include<stdio.h>
void input(int *a,int *b,int *c){
    printf("Enter the numbers : ");
    scanf("%d%d%d", a,b,c);
}
void compare(int a,int b, int c, int *largest){
    if (a >= b && a >= c) {
        *largest = a;
    } else if (b >= a && b >= c) {
        *largest = b;
    } else {
        *largest = c;
    }
}
void output(int a, int b, int c, int largest){
    printf("%d", largest);
}
int main(){
    int x,y,z,lar;
    input(&x,&y,&z);
    compare(x,y,z,&lar);
    output(x,y,z,lar);
    return 0;
}