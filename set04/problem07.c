/*Write a program to add two fractions*/
#include <stdio.h>

typedef struct {
    int num, den;
} Fraction;
Fraction input_fraction() {
    Fraction f;
    printf("Enter numerator: ");
    scanf("%d", &f.num);
    printf("Enter denominator: ");
    scanf("%d", &f.den);
    return f;
}

int find_gcd(int a, int b) {
    if (b == 0)
        return a;
    return find_gcd(b, a % b);
}

Fraction add_fractions(Fraction f1, Fraction f2) {
    Fraction result;
    result.num = f1.num * f2.den + f2.num * f1.den;
    result.den = f1.den * f2.den;

    
    int gcd = find_gcd(result.num, result.den);
    result.num /= gcd;
    result.den /= gcd;

    return result;
}

void  output(Fraction f1, Fraction f2, Fraction sum) {
    printf("\nResult of adding fractions %d/%d and %d/%d is: %d/%d\n",
           f1.num, f1.den, f2.num, f2.den, sum.num, sum.den);
}
int main() {
    Fraction fraction1, fraction2, result;

    printf("Enter Fraction 1:\n");
    fraction1 = input_fraction();

    printf("Enter Fraction 2:\n");
    fraction2 = input_fraction();

    result = add_fractions(fraction1, fraction2);

    output(fraction1, fraction2, result);

    return 0;
}

