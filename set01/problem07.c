/*Write a C program to find sum of all natural numbers until n.*/
#include<stdio.h>
int input_n(){
    int a;
    printf("Enter the number : ");
    scanf("%d", &a);
    return a;
}
int sum_n_nos(int n){
    int sum = 0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    return sum;
}
void output(int n, int sum){
    printf("The sum of all natural numbers from 1 to %d is : %d\n ", n,sum);
}
int main(){
    int n,sum;
    n=input_n();
    sum=sum_n_nos(n);
    output(n,sum);
    return 0;
}