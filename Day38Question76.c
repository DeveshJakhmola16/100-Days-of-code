//Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/
#include <stdio.h>

int main() 
{
    int n, m, i, j, symmetric = 1;
    scanf("%d %d", &n, &m);  // input number of rows and columns
    int matrix[n][m];
    // Read matrix elements
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < m; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // A symmetric matrix must be square
    if (n != m) 
    {
        printf("False");
        return 0;
    }
    
    // Check symmetry condition: matrix[i][j] == matrix[j][i]
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < m; j++) 
        {
            if (matrix[i][j] != matrix[j][i])
            {
                symmetric = 0;
                break;
            }
        }
        if (!symmetric)
            break;
    }
    
    if (symmetric)
        printf("True");
    else
        printf("False");
    return 0;
}