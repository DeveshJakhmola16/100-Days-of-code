//Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/
#include <stdio.h>

int main() 
{
    int n, digit, product = 1, hasOdd = 0;
    scanf("%d", &n);
    while (n > 0) 
    {
        digit = n % 10;         // Extract last digit
        if (digit % 2 != 0) 
        {                       
            product *= digit;   // Multiply with product
            hasOdd = 1;         // Mark that at least one odd digit exists
        }
        n = n / 10;             // Remove last digit
    }
    // If no odd digits found, product should be 1
    if (hasOdd==0)
        product = 1;
    printf("%d", product);
    return 0;
}