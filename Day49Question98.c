//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>
#include <ctype.h>

int main()
{
    char name[100];
    int i, lastSpace = -1;
    gets(name);  // read full name (simple but unsafe, fine for small programs)
    // find the last space (before surname)
    for(i = 0; name[i] != '\0'; i++)
    {
        if(name[i] == ' ')
            lastSpace = i;
    }
   // print first initial
    printf("%c.", toupper(name[0]));
   // print initials for middle names
    for(i = 1; name[i] != '\0'; i++)
    {
        if(name[i] == ' ' && i < lastSpace)
            printf("%c.", toupper(name[i + 1]));
    }
    // print surname
    if(lastSpace != -1)
        printf(" %s", &name[lastSpace + 1]);
    return 0;
}