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
        fact = fact* i;
    }
    return fact;
}
int isFactorial(int n) {
    int i = 1, fact = 1;
    while (fact <= n) {
        if (fact == n) {
            return 1; 
        }
        i++;
        fact = Fact(i);
    }
    return 0; 
}
int countf(int n, int a[]) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (isFactorial(a[i])) {
            count++;
        }
    }
    return count;
}
void output(int n, int a[]) {
    printf("The factorials are: ");
    for (int i = 0; i < n; i++) {
        if (isFactorial(a[i])) {
            printf("%d ", a[i]);
        }
    }
    printf("\n");
}
int main() {
    int arrsize;
    arrsize = arr_size();
    int inputarr[arrsize];
    input(arrsize, inputarr);
    int numfact = countf(arrsize, inputarr);
    int resarr[numfact];
    output(arrsize, inputarr);
    return 0;
}
