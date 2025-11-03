/*Q50: Write a program to print the following pattern:
*****
 ****
  ***
   **
    *
Note: Spaces indicate indentation.

*/
#include <stdio.h>

int main() 
{
    int i, j, k;
    for (i = 5; i >= 1; i--) 
    {   // number of stars in each row
        // print leading spaces
        for (j = 5; j > i; j--) 
        {
            printf(" ");
        }
        // print stars
        for (k = 1; k <= i; k++) 
        {
            printf("*");
        }
        printf("\n"); // move to next line
    }

    return 0;
}