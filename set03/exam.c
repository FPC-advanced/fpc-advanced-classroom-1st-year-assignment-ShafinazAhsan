/*#include<stdio.h>
int main(){
    printf("Testing");
}*/

#include<stdio.h>
int input(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    return n;
}
int isFactorial(int n){
    int fact=1;
    for(int i=1; i<=n;i++){
        if(fact==n){
            fact*=i;
            return 1;
        }
        else{
            return 0;
        }
    }
    return 0;
}
void output(int n){
    if(isFactorial){
        printf("%d is a factorial.", n);
    }
    else{
        printf("%d is not a factorial.", n);
    }
}
int main(){
    int n;
    isFactorial(n);
    output(n);
    return 0;
}