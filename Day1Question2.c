//Write a program to input two numbers and display their sum, difference, product, and quotient#include <stdio.h>
#include <stdio.h>
int main(void) {
    int a, b;
    printf("Enter two numbers:");
    scanf("%d %d", &a, &b);  // read two integers
    int sum = a + b;
    int diff = a - b;
    int prod = a * b;
    int quot = a / b;
    printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d\n", sum, diff, prod, quot);
    return 0;
}
