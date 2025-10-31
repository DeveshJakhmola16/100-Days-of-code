//Write a program to find and display the sum of the first n natural numbers.
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    printf("Sum=%d\n", n > 0 ? n * (n + 1) / 2 : 0);// We are using the formula n(n+1)/2 to calculate the sum of first n natural numbers
    return 0;
}
