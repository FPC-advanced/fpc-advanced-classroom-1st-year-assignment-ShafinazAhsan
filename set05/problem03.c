/*Write a program to find the weight of the camel given height, length, and stomach radius using four functions(structures)*/
#include <stdio.h>
#include <math.h>
struct camel {
    float radius, height, length, weight;
};
typedef struct camel Camel;
Camel input() {
    Camel c;
    printf("Enter the stomach radius, height, and length of the camel: ");
    scanf("%f %f %f", &c.radius, &c.height, &c.length);
    return c;
}
void calculate_weight(Camel *c) {
    c->weight = 3.14 * pow(c->radius, 3) * sqrt(c->height * c->length);
}
void output(Camel c) {
    printf("The weight of the camel with radius: %.1f, height: %.1f, length: %.1f is %.4f\n",
           c.radius, c.height, c.length, c.weight);
}
int main() {
    Camel camel = input();
    calculate_weight(&camel);
    output(camel);
    return 0;
}
