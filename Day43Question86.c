//Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/
#include <stdio.h>

int main() 
{
    char str[100];
    int i = 0, length = 0, flag = 1;
    scanf("%s", str); // read string
    // Find length of string
    while (str[length] != '\0')
    {
        length++;
    }

    // Check palindrome
    for (i = 0; i < length / 2; i++) 
    {
        if (str[i] != str[length - i - 1]) 
        {
            flag = 0; // not a palindrome
            break;
        }
    }
    if (flag)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}