//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/
#include <stdio.h>
int main() 
{
    int n, reversed = 0, remainder, original;
    scanf("%d", &n);
    original = n;
    while (n != 0) 
    {
        remainder = n % 10;           // Get last digit
        reversed = reversed * 10 + remainder; // Build reversed number
        n = n / 10;                   // Remove last digit
    }
    if (original == reversed)
        printf("Palindrome");
    else
        printf("Not palindrome");
    return 0;
}