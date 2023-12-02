/*Write a program to add n fractions*/
#include <stdio.h>
typedef struct fraction{
    int num, den;
} Fraction;
int input_n(){
    int n;
    printf("Enter the number of fractions: ");
    scanf("%d", &n);
    return n;
}
Fraction input_fraction(){
    Fraction f;
    printf("Enter the fraction (numerator denominator): ");
    scanf("%d %d", &f.num, &f.den);
    return f;
}
void input_n_fractions(int n, Fraction f[n]){
    for (int i = 0; i < n; i++) {
        f[i] = input_fraction();
    }
}
int find_gcd(int a, int b){
    while (b != 0) {
        int c = b;
        b = a % b;
        a = c;
    }
    return a;
}
Fraction add_fractions(Fraction f1, Fraction f2){
    Fraction sum;
    sum.num = f1.num * f2.den + f2.num * f1.den;
    sum.den = f1.den * f2.den;
    int gcd = find_gcd(sum.num, sum.den);
    sum.num = sum.num / gcd;
    sum.num = sum.den / gcd;
    return sum;
}
Fraction add_n_fractions(int n, Fraction f[n]){
    Fraction result = f[0];
    for (int i = 1; i < n; i++) {
        result = add_fractions(result, f[i]);
    }
    return result;
}
void output(int n, Fraction f[n], Fraction sum){
    printf("%d/%d", f[0].num, f[0].den);
    for (int i = 1; i < n; i++) {
        printf(" + %d/%d", f[i].num, f[i].den);
    }
    printf(" = %d/%d\n", sum.num, sum.den);
}
int main(){
    int n = input_n();
    Fraction fractions[n];
    input_n_fractions(n, fractions);
    Fraction sum = add_n_fractions(n, fractions);
    output(n, fractions, sum);
    return 0;
}
