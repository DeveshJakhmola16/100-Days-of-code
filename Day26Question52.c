/*Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*

*/
#include <stdio.h>

int main() 
{
    // First block: 1 star
    printf("*\n\n");

    // Second block: 3 stars
    for(int i = 0; i < 3; i++)
        printf("*\n");
    printf("\n");

    // Third block: 5 stars
    for(int i = 0; i < 5; i++)
        printf("*\n");
    printf("\n");

    // Fourth block: 3 stars
    for(int i = 0; i < 3; i++)
        printf("*\n");
    printf("\n");

    // Fifth block: 1 star
    printf("*\n");

    return 0;
}
