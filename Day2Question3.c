//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>
int main() {
    int length, breadth;
    printf("Enter length and breadth: ");
    scanf("%d %d", &length, &breadth);// Input two integers
    int area= length * breadth;
    int perimeter = 2 * (length + breadth);
    printf("Area=%d, Perimeter=%d\n", area, perimeter);
    return 0;
}
