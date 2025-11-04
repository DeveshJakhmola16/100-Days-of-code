//Q83: Count vowels and consonants in a string.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/
#include <stdio.h>

int main() 
{
    char str[100];
    int i = 0;
    int vowels = 0, consonants = 0;
    scanf("%s", str); // read string (no spaces)
    while (str[i] != '\0') 
    {
        char ch = str[i];
        // Convert to lowercase if uppercase
        if (ch >= 'A' && ch <= 'Z')
        {
            ch = ch + 32;
        }

        // Check for vowels
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
        {
            vowels++;
        } 
        // Check for consonants (letters only)
        else if (ch >= 'a' && ch <= 'z') 
        {
            consonants++;
        }
        i++;
    }
    printf("Vowels=%d, Consonants=%d", vowels, consonants);
    return 0;
}