//Take two structs as input and check if they are identical.

#include <stdio.h>
#include <string.h>
#define MAX_NAME_LEN 100
struct Person {
    char name[MAX_NAME_LEN];
    int age;
};
int areIdentical(struct Person p1, struct Person p2) {
    return (strcmp(p1.name, p2.name) == 0) && (p1.age == p2.age);
}
int main() 
{
    struct Person person1, person2;

    // Read first person's data
    printf("Enter details for person 1:\n");
    printf("Name: ");
    fgets(person1.name, sizeof(person1.name), stdin);
    person1.name[strcspn(person1.name, "\n")] = 0; // Remove newline character

    printf("Age: ");
    scanf("%d", &person1.age);
    getchar(); // Clear newline character from buffer

    // Read second person's data
    printf("\nEnter details for person 2:\n");
    printf("Name: ");
    fgets(person2.name, sizeof(person2.name), stdin);
    person2.name[strcspn(person2.name, "\n")] = 0; // Remove newline character

    printf("Age: ");
    scanf("%d", &person2.age);

    // Check if they are identical
    if (areIdentical(person1, person2)) 
    {
        printf("\nThe two persons are identical.\n");
    } else 
    {
        printf("\nThe two persons are not identical.\n");
    }

    return 0;
}