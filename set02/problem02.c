/*Write a program to find if a triangle is scalene*/
#include<stdio.h>
int input_side(){
    int a;
    printf("Enter the sides : ");
    scanf("%d", &a);
    return a;
}
int check_scalene(int a,int b,int c){
    if(a!=b && a!=c && b!=c){
        return 1;
    }
    else{
        return 0;
    }
}
void output(int a,int b,int c,int isscalene){
    if(isscalene){
        printf("The triangle with sides %d,%d and %d is a scalene triangle.", a,b,c);
    }
    else{
        printf("The triangle with sides %d,%d and %d is not a scalene triangle.", a,b,c);
    }
}
int main(){
    int a,b,c,isscalene;
    a=input_side();
    b=input_side();
    c=input_side();
    isscalene=check_scalene(a,b,c);
    output(a,b,c,isscalene);
    return 0;
}
