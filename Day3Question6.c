//Write a program to swap two numbers using a third variable. 
#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b); // input two numbers
    int temp = a;
    a = b;
    b = temp;
    printf("After swap: %d %d\n", a, b);
    return 0;
}