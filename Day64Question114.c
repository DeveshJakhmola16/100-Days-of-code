//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/
#include <stdio.h>
#include <string.h>

int main() 
{
    char s[1000];
    printf("Enter the string: ");
    scanf("%s", s);
    int n = strlen(s);
    int maxLen = 0;
    for (int i = 0; i < n; i++) 
    {
        int seen[256] = {0}; // track characters in current substring
        int len = 0;
        for (int j = i; j < n; j++) 
        {
            if (seen[(unsigned char)s[j]])
                break; // repeating character found
            seen[(unsigned char)s[j]] = 1;
            len++;
        }
        if (len > maxLen)
            maxLen = len;
    }
    printf("%d\n", maxLen);
    return 0;
}