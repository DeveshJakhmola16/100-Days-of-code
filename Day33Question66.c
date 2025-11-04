//Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/
#include <stdio.h>

int main() 
{
    int n, i, element;
    scanf("%d", &n); // size of array
    int arr[n + 1]; // +1 space for the new element
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &element); // element to insert
    // Find position where key should be inserted
    int pos = n; 
    for (i = 0; i < n; i++) 
    {
        if (element < arr[i]) 
        {
            pos = i;
            break;
        }
    }
    // Shift elements to the right
    for (i = n; i > pos; i--) 
    {
        arr[i] = arr[i - 1];
    }
    // Insert element at found position
    arr[pos] = element;
    
    // Print updated array
    for (i = 0; i <= n; i++) 
    {
        printf("%d ", arr[i]);
    }
    return 0;
}