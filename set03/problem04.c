/*Write a program to find nth number in fibonacci sequence.*/
#include<stdio.h>
int input(){
    int n;
    printf("Enter the number: \n");
    scanf("%d", &n);
    return n;
}
int find_fibo(int n){
    int a=0, b=1, c;
    if(n<=1){
        return n;
    }
    for(int i=2;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    return b;
}
void output(int n,int b){
    printf("fibo(%d)=%d", n, b);
}
int main(){
    int n, fibo;
    n=input();
    fibo=find_fibo(n);
    output(n,fibo);
    return 0;
}