#include <stdio.h>
int arr_size() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    return n;
}
void input(int n, int a[]) {
    printf("Enter %d elements in the array: \n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}
int Fact(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}
void arrfact(int n, int a[], int f[]) {
    for (int i = 0; i < n; i++) {
        f[i] = Fact(a[i]);
    }
}
void output(int n, int f[]) {
    printf("The factorials are: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", f[i]);
    }
    printf("\n");
}
int main() {
    int arrsize;
    arrsize = arr_size();
    int inputarr[arrsize];
    input(arrsize, inputarr);
    int resarr[arrsize];
    arrfact(arrsize, inputarr, resarr);
    output(arrsize, resarr);
    return 0;
}
