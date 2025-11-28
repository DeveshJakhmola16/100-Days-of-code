//Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

#include <stdio.h>
enum Operation 
{
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};
int main() 
{
    enum Operation choice;
    int a, b, result;

    // Display menu
    printf("Select an operation:\n");
    printf("1. ADD\n");
    printf("2. SUBTRACT\n");
    printf("3. MULTIPLY\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", (int*)&choice);
    // Take two integers as input
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    // Perform operation based on user choice
    switch (choice) {
        case ADD:
            result = a + b;
            printf("Result: %d + %d = %d\n", a, b, result);
            break;
        case SUBTRACT:
            result = a - b;
            printf("Result: %d - %d = %d\n", a, b, result);
            break;
        case MULTIPLY:
            result = a * b;
            printf("Result: %d * %d = %d\n", a, b, result);
            break;
        default:
            printf("Invalid choice!\n");
            break;
    }

    return 0;
}