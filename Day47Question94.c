//Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>

int main() 
{
    char str[200];
    char word[50], longest[50];
    int i = 0, j = 0, maxLen = 0, currLen = 0;
    gets(str);  // take input sentence

    while (1) // infinite loop, will break on null character
    {
        char ch = str[i];
        if (ch == ' ' || ch == '\0') 
        {
            word[j] = '\0';  // end current word
            currLen = j;     // store its length
            if (currLen > maxLen) 
            {
                maxLen = currLen;
                int k = 0;
                while (word[k] != '\0') 
                {
                    longest[k] = word[k];
                    k++;
                }
                longest[k] = '\0';
            }
        j = 0;  // reset word index for next word
        if (ch == '\0')
                break;
        } 
        else 
        {
            word[j] = ch;
            j++;
        }
        i++;
    }
    printf("%s", longest);
    return 0;
}