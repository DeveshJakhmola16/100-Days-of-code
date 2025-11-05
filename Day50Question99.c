//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/
#include <stdio.h>

int main()
{
    int d, m, y;
    scanf("%d/%d/%d", &d, &m, &y);   // input format: dd/mm/yyyy
    if(m == 4)
        printf("%02d-Apr-%d", d, y);
    else
        printf("Month not supported");
    return 0;
}