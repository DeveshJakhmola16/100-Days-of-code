//Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/
#include <stdio.h>

int main() 
{
    int n;
    scanf("%d", &n);

    if (n == 0) 
    {
        printf("0");
        return 0;
    }
    long long binary = 0;
    long long place = 1;   // keeps track of position (ones, tens, hundreds...)
    while (n > 0) 
    {
        int rem = n % 2;       // get remainder (0 or 1)
        binary = rem * place + binary;  // build binary number
        n = n / 2;             // divide number by 2
        place = place * 10;    // shift left in decimal representation
    }
    printf("%lld", binary);
    return 0;
}