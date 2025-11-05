//Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/
#include <stdio.h>

int main() 
{
    char str[100];
    int freq[26] = {0}; // to store frequency of each letter
    int i=0;
    gets(str);  // take input string
    while(str[i] != '\0') 
    {
        char ch = str[i];
       // only consider lowercase letters
        if(ch >= 'a' && ch <= 'z')
        {
            freq[ch - 'a']++;   // increase frequency
            if(freq[ch - 'a'] == 2) 
            { // repeating found
                printf("%c", ch);
                return 0;
            }
        }
        i++;
    }
   printf("No repeating character");
    return 0;
}