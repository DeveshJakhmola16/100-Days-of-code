//Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/
#include <stdio.h>

int main() 
{
    char str1[100], str2[100];
    int freq[26] = {0};
    int i;
    // Take two input strings
    gets(str1);
    gets(str2);
    // Count frequency of characters in str1
    for(i = 0; str1[i] != '\0'; i++) 
    {
        if(str1[i] >= 'a' && str1[i] <= 'z')
            freq[str1[i] - 'a']++;
    }
   // Subtract frequency of characters in str2
    for(i = 0; str2[i] != '\0'; i++) 
    {
        if(str2[i] >= 'a' && str2[i] <= 'z')
            freq[str2[i] - 'a']--;
    }

    // Check if all frequencies are zero 
    for(i = 0; i < 26; i++) 
    {
        if(freq[i] != 0) 
        {
            printf("Not anagrams");
            return 0;
        }
    }
    printf("Anagrams");
    return 0;
}