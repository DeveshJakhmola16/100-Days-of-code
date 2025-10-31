//Write a program to input two numbers and display their sum
#include <stdio.h>
int main() {
    int num1, num2,Sum;
    // Input two numbers from the user
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    Sum=num1+num2;
    printf("Sum = %d\n",Sum);
    return 0;
}