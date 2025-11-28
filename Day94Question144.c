//Write a function that accepts a structure as parameter and prints its members.

#include <stdio.h>
#include <string.h>
#define MAX_NAME_LEN 100
struct Person 
{
    char name[MAX_NAME_LEN];
    int age;
};
void printPerson(struct Person p) 
{
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);
}
int main() 
{
    struct Person person;

    // Read person data
    printf("Enter name: ");
    fgets(person.name, sizeof(person.name), stdin);
    person.name[strcspn(person.name, "\n")] = 0; // Remove newline character

    printf("Enter age: ");
    scanf("%d", &person.age);

    // Print person data
    printf("\nPerson Details:\n");
    printPerson(person);
    return 0;
}