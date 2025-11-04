//Q65: Search in a sorted array using binary search.

/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/
#include <stdio.h>

int main() 
{
    int n, key, low, high, mid, found = -1;
    scanf("%d", &n);  // size of array
    int arr[n];
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    
    scanf("%d", &key);  // element to search
    low = 0;
    high = n - 1;
    // Binary search loop
    while (low <= high) 
    {
        mid = (low + high) / 2;
        
        if (arr[mid] == key) 
        {
            found = mid;
            break;
        } 
        else if (arr[mid] < key) 
        {
            low = mid + 1;
        } 
        else 
        {
            high = mid - 1;
        }
    }
    if (found != -1)
        printf("Found at index %d", found);
    else
        printf("-1");
        
    return 0;
}