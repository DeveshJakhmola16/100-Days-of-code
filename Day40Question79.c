//Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/
#include <stdio.h>

int main() 
{
    int n, m;
    scanf("%d %d", &n, &m);
    int matrix[n][m];
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // Diagonal traversal
    for (int d = 0; d <= n + m - 2; d++) 
    {
        if (d % 2 == 0) {
            // Even diagonal: traverse from top-right to bottom-left
            int row = (d < n) ? d : n - 1;
            int col = d - row;
            while (row >= 0 && col < m) {
                printf("%d ", matrix[row][col]);
                row--;
                col++;
            }
        } 
        else 
        {
            // Odd diagonal: traverse from bottom-left to top-right
            int col = (d < m) ? d : m - 1;
            int row = d - col;
            while (col >= 0 && row < n) {
                printf("%d ", matrix[row][col]);
                row++;
                col--;
            }
        }
    }
    
    return 0;
}