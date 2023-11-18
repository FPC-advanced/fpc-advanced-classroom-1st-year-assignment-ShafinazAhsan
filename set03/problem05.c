/*Write a program to find all the prime numbers between 2 to n Eratosthenes Sieve method.*/
#include<stdio.h>
int input_array_size() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    return n;
}
void init_array(int n, int a[n]) {
    for (int i = 2; i < n; i++) {
        a[i] = 1;  
    }
}
void eratosthenes_sieve(int n, int a[n]) {
    for (int i = 2; i * i <= n; i++) {
        if (a[i] == 1) {
            for (int j = i * i; j <= n; j += i) {
                a[j] = 0;  
            }
        }
    }
}
void output(int n, int a[n]) {
    printf("Prime numbers between 2 and %d are:\n", n - 1);
    for (int i = 2; i < n; i++) {
        if (a[i] == 1) {
            printf("%d ", i);
        }
    }
}
int main() {
    int n = input_array_size();
    int primes[n + 1];
    init_array(n + 1, primes);
    eratosthenes_sieve(n + 1, primes);
    output(n + 1, primes);
    return 0;
}