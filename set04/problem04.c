/*Write a program to evaluate a polynomial at a given point using Horner's method*/
#include <stdio.h>
int input_degree() {
    int degree;
    printf("Enter the degree of the polynomial: ");
    scanf("%d", &degree);
    return degree;
}
void input_coefficients(int n, float a[n]) {
    printf("Enter the coefficients of the polynomial: ");
    for (int i = 0; i <= n; i++) {
        scanf("%f", &a[i]);
    }
}
float input_x() {
    float x;
    printf("Enter the value of x: ");
    scanf("%f", &x);
    return x;
}
float evaluate_polynomial(int n, float a[n], float x) {
    float result = a[n];
    for (int i = n - 1; i >= 0; i--) {
        result = result * x + a[i];
    }
    return result;
}
void output(int n, float a[n], float x, float result) {
    printf("H(%d, %.2f, %.2f) = ", n, a[0], x);
    for (int i = 0; i <= n; i++) {
        if (i != n) {
            printf("%.2f + ", a[i]);
        } else {
            printf("%.2f * %.2f^%d = %.7f\n", a[i], x, i, result);
        }
    }
}
int main() {
    int degree = input_degree();
    float coefficients[degree + 1];
    input_coefficients(degree, coefficients);
    float x = input_x();
    float result = evaluate_polynomial(degree, coefficients, x);
    output(degree, coefficients, x, result);
    return 0;
}
