/*Write a C program to find the sum of 2 complex numbers.*/
#include<stdio.h>
struct _complex{
    float real;
    float imaginary;
};
typedef struct _complex Complex;
Complex input_complex(){
    Complex c;
    scanf("%f%f", &c.real, &c.imaginary);
    return c;
}
Complex add_complex(Complex a, Complex b){
    Complex sum;
    sum.real= a.real+b.real;
    sum.imaginary=a.imaginary+b.imaginary;
    return sum;
}
void output(Complex a, Complex b, Complex sum){
    printf("The sum of %f+%fi and %f+%fi is %f+%fi\n", a.real,a.imaginary,b.real,b.imaginary,sum.real,sum.imaginary);
}
int main(){
    Complex n1,n2,result;
    printf("Enter the first number : ");
    n1=input_complex();
    printf("Enter the second number : ");
    n2=input_complex();
    result=add_complex(n1,n2);
    output(n1,n2,result);
    return 0;
}