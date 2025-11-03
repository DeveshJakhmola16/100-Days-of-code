//Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/
#include <stdio.h>

int main() 
{
    int a, b, num1, num2, hcf, lcm;
    scanf("%d %d", &a, &b);
    num1 = a;
    num2 = b;
    // Find HCF using Euclidean algorithm
    while (b != 0) 
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    hcf = a;
    //Calculate LCM
    lcm = (num1 * num2) / hcf;
    printf("%d", lcm);
    return 0;
}