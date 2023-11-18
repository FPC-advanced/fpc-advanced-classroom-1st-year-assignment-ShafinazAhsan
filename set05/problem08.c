/*Write program to find the weight of a truck load of n camels.
Take inputs for:
truck weight
height, radius and length of n different camels
total_truck_weight = truck_weight + weight_of_camels*/
#include <stdio.h>
#include <math.h>
typedef struct _camel {
    float radius, height, length, weight;
} Camel;
void input(int n, Camel c[n], float *truck_weight) {
    printf("Enter the height, length, and radius of each camel:\n");
    for (int i = 0; i < n; i++) {
        printf("Enter the height of camel no. %d: ", i + 1);
        scanf("%f", &c[i].height);
        printf("Enter the length of camel no. %d: ", i + 1);
        scanf("%f", &c[i].length);
        printf("Enter the radius of camel no. %d: ", i + 1);
        scanf("%f", &c[i].radius);
    }
    printf("Enter the weight of the truck: ");
    scanf("%f", truck_weight);
}
void find_camel_weight(int n, Camel c[n]) {
    for (int i = 0; i < n; i++) {
        c[i].weight = 3.1415 * c[i].radius * c[i].radius * c[i].height * c[i].length;
    }
}
float compute_total_weight(int n, Camel c[n], float truck_weight) {
    float total_weight = truck_weight;
    for (int i = 0; i < n; i++) {
        total_weight += c[i].weight;
    }
    return total_weight;
}
void output(float total_weight) {
    printf("The Total weight of the truck is: %.6f\n", total_weight);
}
int main() {
    int num_camels;
    printf("Enter the number of camels: ");
    scanf("%d", &num_camels);
    Camel camels[num_camels];
    float truck_weight;
    input(num_camels, camels, &truck_weight);
    find_camel_weight(num_camels, camels);
    float total_weight = compute_total_weight(num_camels, camels, truck_weight);
    output(total_weight);
    return 0;
}
