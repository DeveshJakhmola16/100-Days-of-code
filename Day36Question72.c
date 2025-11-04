//Q72: Find the sum of all elements in a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/
#include <stdio.h>

int main() 
{
    int rows, cols, i, j, sum = 0;
    scanf("%d %d", &rows, &cols);  // input number of rows and columns
    int matrix[rows][cols];
    // Read matrix elements and calculate sum
    for (i = 0; i < rows; i++) 
    {
        for (j = 0; j < cols; j++) 
        {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
    }
    printf("%d", sum);
    return 0;
}