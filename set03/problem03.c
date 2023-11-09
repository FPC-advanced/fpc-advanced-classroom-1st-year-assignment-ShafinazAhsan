/*Write a program to check if the given number is prime*/
#include<stdio.h>
int input_number(){
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    return n;
}
int is_prime(int n) {
    int result = 1; 
    if (n <= 1) {
        result = 0; 
    } else {
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                result = 0; 
                break;
            }
        }
    }
    return result;
}
void output(int n,int result){
    if(result){
        printf("%d is a prime number.", n);
    }
    else{
        printf("%d is not a prime number.", n);
    }
}
int main(){
    int n,result;
    n=input_number();
    result=is_prime(n);
    output(n,result);
    return 0;
}
