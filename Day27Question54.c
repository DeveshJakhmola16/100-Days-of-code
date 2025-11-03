/*Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *

*/
#include <stdio.h>

int main() 
{
    int i, j, n = 4; // number of rows in the top half
    for (i = 1; i <= n; i++) 
    {
        // print leading spaces
        for (j = 1; j <= n - i; j++)
            printf(" ");
        // print stars (2*i - 1 stars)
        for (j = 1; j <= 2*i - 1; j++)
            printf("*");
        printf("\n");
    }

    // Lower part of diamond
    for (i = n - 1; i >= 1; i--) 
    {
        // print leading spaces
        for (j = 1; j <= n - i; j++)
            printf(" ");
        // print stars (2*i - 1 stars)
        for (j = 1; j <= 2*i - 1; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}