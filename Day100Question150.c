//Use pointer to struct to modify and display data using -> operator.

#include <stdio.h>
#include <string.h>
#define MAX_NAME_LEN 100
struct Person {
    char name[MAX_NAME_LEN];
    int age;
};
int main() 
{
    struct Person person;
    struct Person *p = &person;

    // Read person data using pointer
    printf("Enter name: ");
    fgets(p->name, sizeof(p->name), stdin);
    p->name[strcspn(p->name, "\n")] = 0; // Remove newline character

    printf("Enter age: ");
    scanf("%d", &p->age);

    // Print person data using pointer
    printf("\nPerson Details:\n");
    printf("Name: %s\n", p->name);
    printf("Age: %d\n", p->age);

    return 0;
}