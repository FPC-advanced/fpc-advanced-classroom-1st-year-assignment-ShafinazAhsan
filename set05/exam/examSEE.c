#include<stdio.h>
int input(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    return n;
}
int isFactorial(int n){
    int fact=1;
    for(int i=1; fact<=n;i++){
        if(fact==n){
            return 1;
        }
        fact=fact*i;
    }
    return 0;
}
void output(int n, int isFact){
    if(isFact){
        printf("%d is a factorial.", n);
    }
    else{
        printf("%d is not a factorial.", n);
    }
}
int main(){
    int n, f;
    n=input();
    f=isFactorial(n);
    output(n,f);
    return 0;
}