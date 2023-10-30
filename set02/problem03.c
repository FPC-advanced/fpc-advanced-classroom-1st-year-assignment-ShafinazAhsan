/*Write a program to find whether a number is a composite number*/
#include<stdio.h>
int input_number(){
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    return n;
}
int is_composite(int n){
    if(n<=1){
        return 0;
    }
    else{
    for(int i=2;i<n;i++)
        if(n%i==0){
            return 1;
        }
    }
    return 0;
}
void output(int n,int result){
    if(result){
        printf("%d is a composite number.", n);
    }
    else{
        printf("%d is not a composite number.",n);
    }
}
int main(){
    int n, result;
    n=input_number();
    result=is_composite(n);
    output(n,result);
    return 0;
}