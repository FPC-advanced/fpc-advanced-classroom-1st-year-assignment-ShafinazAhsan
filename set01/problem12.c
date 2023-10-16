/*Write a C program to find the sum of n complex numbers.*/
#include<stdio.h>
struct _complex{
    float real;
    float imaginary;
};
typedef struct _complex Complex;
int get_n(){
    int n;
    printf("Enter the first string : ");
    scanf("%d",&n);
    return n;
}
Complex input_complex(){
    Complex c;
    scanf("%f%f", &c.real, &c.imaginary);
    return c;
}
void input_n_complex(int n, Complex c[n]){
    printf("Enter the number of arrays : %d\n", n);
    for(int i=0;i<n;i++){
        scanf("%f", c[n]);
    }
}
Complex add(Complex a,Complex b){
    Complex sum;
    sum.real=a.real+b.real;
    sum.imaginary=a.imaginary+b.imaginary;
    return sum;
}
Complex add_n_complex(int n,Complex c[n]){
    Complex sum=0;
    for(int i=0;i<n;i++){
        sum+=c[n];
    }
}