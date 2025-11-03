//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>

int main() 
{
    int num, first, last, temp, count = 0, power = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    last = num % 10;  // get last digit
    // find first digit and count digits
    while (temp >= 10) 
    {
        temp = temp / 10;
        power = power * 10;
    }
    first = temp;
    // swap first and last digits
    num = num % power;           // remove first digit
    num = num / 10;              // remove last digit
    int swapped = last * power + num * 10 + first;
    printf("Swapped number: %d\n", swapped);
    return 0;
}