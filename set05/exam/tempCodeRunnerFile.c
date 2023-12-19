#include<stdio.h>
int arr_size(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    return n;
}
int input(int n, int a[n]){
    printf("Enter %d elements in the array: \n", n);
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    return 0;
}
int Fact(int n){
    int fact=1;
    for(int i=1;fact<=n;i++){
        fact=fact*i;
    }
    return fact;
}
void arrfact(int n, int a[n], int f[n]) {
    for (int i = 0; i < n; i++) {
        f[i] = fact(a[i]);
    }
}
void output(int n,int f[n]){
    printf("The factorials are: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", f[i]);
    }
    printf("\n");
}
int main(){
    int arrsize,resarr;
    arrsize=arr_size();
    int inputarr[arrsize];
    input(inputarr,arrsize);
    arrfact(inputarr, arrsize, resarr);
    output(resarr, arrsize);
    return 0;
}

