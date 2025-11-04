//Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/
#include <stdio.h>

int main() 
{
    int n, i;
    scanf("%d", &n); // size of array
    int arr[n];
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    int largest = arr[0];
    int secondLargest = -1; // or any very small number
    for (i = 1; i < n; i++) 
    {
        if (arr[i] > largest) 
        {
            secondLargest = largest;
            largest = arr[i];
        } 
        else if (arr[i] > secondLargest && arr[i] < largest) 
        {
            secondLargest = arr[i];
        }
    }
    printf("%d", secondLargest);
    return 0;
}