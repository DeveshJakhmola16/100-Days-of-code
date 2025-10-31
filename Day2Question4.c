//Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>
#include <stdio.h>

int main(void) {
    float r;
    printf("Enter radius:\n");
    scanf("%f", &r);// read radius
    float pi = 3.14;
    float area = pi * r * r;
    float circumference = 2.0 * pi * r;
    printf("Area=%.2f, Circumference=%.2f\n", area, circumference);
    return 0;
}