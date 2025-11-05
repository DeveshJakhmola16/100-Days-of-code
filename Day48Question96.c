//Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include <stdio.h>

int main() 
{
    char str[200];
    int i = 0, start = 0, end, temp;
    gets(str);  // take input sentence
    while (str[i] != '\0') 
    {
        if (str[i] == ' ') 
        {
            end = i - 1;
            // reverse current word
            while (start < end) 
            {
                temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }
        start = i + 1;  // move to next word
        }
        i++;
    }
    // Handling the last word (since it ends with '\0', not space)
    end = i - 1;
    while (start < end)
    {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }

    printf("%s", str);
    return 0;
}