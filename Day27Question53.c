/*Q53: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*

*/
#include <stdio.h>

int main() 
{
    int i, j;
    int n = 9; // maximum number of stars in the middle row
    // Upper part of the pattern
    for (i = 1; i <= n; i += 2) 
    {    
        for (j = 1; j <= i; j++) 
        {
            printf("*");
        }
        printf("\n");
    }
   // Lower part of the pattern
    for (i = n - 2; i >= 1; i -= 2) 
    { // decreasing odd numbers
        for (j = 1; j <= i; j++) 
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
