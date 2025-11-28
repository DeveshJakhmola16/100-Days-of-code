//Use malloc() to allocate structure memory dynamically and print details.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_NAME_LEN 100
struct Person {
    char name[MAX_NAME_LEN];
    int age;
};
int main() 
{
    struct Person *p;

    // Allocate memory for a Person structure
    p = (struct Person *)malloc(sizeof(struct Person));
    if (p == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Read person data
    printf("Enter name: ");
    fgets(p->name, sizeof(p->name), stdin);
    p->name[strcspn(p->name, "\n")] = 0; // Remove newline character

    printf("Enter age: ");
    scanf("%d", &p->age);

    // Print person data
    printf("\nPerson Details:\n");
    printf("Name: %s\n", p->name);
    printf("Age: %d\n", p->age);

    // Free allocated memory
    free(p);

    return 0;
}