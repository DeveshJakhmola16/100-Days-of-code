//Write a program to swap two numbers without using a third variable.
#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    // Swapping without a third variable using arithmetic operations
    a = a + b;
    b = a - b;   // now b holds original a
    a = a - b;   // now a holds original b
    printf("After swap: %d %d\n", a, b);
    return 0;
}
