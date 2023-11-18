/*Write a program to find out the mood of a Camel.
Camel is:
sick when its stomach_radius is less than height and less than length
happy when its height is less than length and less than stomach_radius.
tense when its length is less than height and stomach_radius.
*/
#include <stdio.h>
void input_camel_details(float *radius, float *height, float *length) {
    printf("Enter the stomach radius, height, and length of the camel: ");
    scanf("%f %f %f", radius, height, length);
}
int find_mood(float radius, float height, float length) {
    if (radius < height && radius < length)
        return 0; 
    else if (height < length && height < radius)
        return 1; 
    else if (length < height && length < radius)
        return 2; 
    else
        return -1;
}
void output(float radius, float height, float length, int mood) {
    if (mood == 0)
        printf("The Camel is Sick\n");
    else if (mood == 1)
        printf("The Camel is Happy\n");
    else if (mood == 2)
        printf("The Camel is Tense\n");
    else
        printf("don't know\n");
}
int main() {
    float stomach_radius, camel_height, camel_length;
    int mood;
    input_camel_details(&stomach_radius, &camel_height, &camel_length);
    mood = find_mood(stomach_radius, camel_height, camel_length);
    output(stomach_radius, camel_height, camel_length, mood);
    return 0;
}
