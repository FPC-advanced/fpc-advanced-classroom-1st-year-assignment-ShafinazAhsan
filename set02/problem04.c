/*Write a program to find sum of composite number in an array of different numbers entered by the user.*/
#include <stdio.h>
int input_array_size() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    return n;
}
void input_array(int n, int a[n]) {
    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}
int sum_composite_numbers(int n, int a[n]) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (a[i]<=1) {
            continue;
        }
        int is_composite=0;
        for (int j=2;)
    }
    return sum;
}
void output(int sum) {
    printf("Sum of composite numbers in the array: %d\n", sum);
}
int main() {
    int n = input_array_size();
    int a[n];
    input_array(n, a);
    int sum = sum_composite_numbers(n, a);
    output(sum);
    return 0;
}
