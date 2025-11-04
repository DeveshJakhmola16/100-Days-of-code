//Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/
#include <stdio.h>

int main() 
{
    int n, k, i;
    scanf("%d", &n);  // size of array
    int arr[n];
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);  // number of rotations
    k = k % n;        // handle if k > n
    // Rotate using reversal logic 
    // Step 1: reverse entire array
    for (i = 0; i < n / 2; i++) 
    {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    // Step 2: reverse first k elements
    for (i = 0; i < k / 2; i++) 
    {
        int temp = arr[i];
        arr[i] = arr[k - i - 1];
        arr[k - i - 1] = temp;
    }
    
    // Step 3: reverse remaining n - k elements
    for (i = 0; i < (n - k) / 2; i++) 
    {
        int temp = arr[k + i];
        arr[k + i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    // Print rotated array
    for (i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    return 0;
}