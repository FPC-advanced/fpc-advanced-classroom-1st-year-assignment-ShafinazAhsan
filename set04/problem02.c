/*Write a program to find the smallest of three fractions*/
#include<stdio.h>
typedef struct{
    int num, den;
} Fractions;
void input(Fractions *frac) {
    printf("Enter the fraction (numerator denominator): ");
    scanf("%d %d", &frac->num, &frac->den);
}
Fractions smallest_fraction(Fractions frac1, Fractions frac2, Fractions frac3) {
    double val1 = (double)frac1.num / frac1.den;
    double val2 = (double)frac2.num / frac2.den;
    double val3 = (double)frac3.num / frac3.den;
    if (val1 <= val2 && val1 <= val3) {
        return frac1;
    } else if (val2 <= val1 && val2 <= val3) {
        return frac2;
    } else {
        return frac3;
    }
}
void output(Fractions frac) {
    printf("The smallest of %d/%d, %d/%d, and %d/%d is %d/%d\n",
           frac.num, frac.den, frac.num, frac.den, frac.num, frac.den, frac.num, frac.den);
}
int main() {
    Fractions frac1, frac2, frac3;
    printf("Enter three fractions:\n");
    input(&frac1);
    input(&frac2);
    input(&frac3);
    Fractions smallest = smallest_fraction(frac1, frac2, frac3);
    output(smallest);
    return 0;
}