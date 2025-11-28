//Define a structure Student with name, roll_no, and marks, then read and print one student's data.

#include <stdio.h>
#include <string.h>
#define MAX_NAME_LEN 100
struct Student {
    char name[MAX_NAME_LEN];
    int roll_no;
    float marks;
};
int main() 
{
    struct Student student;

    // Read student data
    printf("Enter name: ");
    fgets(student.name, sizeof(student.name), stdin);
    student.name[strcspn(student.name, "\n")] = 0; // Remove newline character

    printf("Enter roll number: ");
    scanf("%d", &student.roll_no);

    printf("Enter marks: ");
    scanf("%f", &student.marks);

    // Print student data
    printf("\nStudent Details:\n");
    printf("Name: %s\n", student.name);
    printf("Roll Number: %d\n", student.roll_no);
    printf("Marks: %.2f\n", student.marks);

    return 0;
}