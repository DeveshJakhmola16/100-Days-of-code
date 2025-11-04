//Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include <stdio.h>

int main() 
{
    long long num;
    int freq[10] = {0}; // to count frequency of digits 0-9
    int digit, maxDigit = 0, maxCount = 0;
    scanf("%lld", &num);
    // Count frequency of each digit
    while (num > 0) 
    {
        digit = num % 10;
        freq[digit]++;
        num /= 10;
    }
    
    // Find digit with highest frequency
    for (int i = 0; i < 10; i++) 
    {
        if (freq[i] > maxCount) 
        {
            maxCount = freq[i];
            maxDigit = i;
        }
    }
    printf("%d", maxDigit);
     return 0;
}