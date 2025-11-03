//Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/
#include <stdio.h>

int main() 
{
    long long n;
    scanf("%lld", &n);
    long long result = 0, place = 1;
    while (n > 0) 
    {
        int bit = n % 10;      // Extract last binary digit
        bit = (bit == 0) ? 1 : 0;  // Flip the bit (1’s complement)
        result = result + bit * place;
        place *= 10;            // Move to next position
        n /= 10;                // Remove last bit
    }
    printf("%lld", result);
    return 0;
}