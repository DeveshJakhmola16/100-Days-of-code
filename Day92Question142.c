//Store details of 5 students in an array of structures and print all.

#include <stdio.h>
#include <string.h>
#define MAX_NAME_LEN 100
#define MAX_STUDENTS 5
struct Student 
{
    char name[MAX_NAME_LEN];
    int roll_no;
    float marks;
};
int main() 
{
    struct Student students[MAX_STUDENTS];
    int i;
    // Read details for 5 students
    for (i = 0; i < MAX_STUDENTS; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = 0; // Remove newline

        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);

        printf("Marks: ");
        scanf("%f", &students[i].marks);
        getchar(); // Clear newline character from buffer
    }

    // Print details of all students
    printf("\nStudent Details:\n");
    for (i = 0; i < MAX_STUDENTS; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].roll_no);
        printf("Marks: %.2f\n\n", students[i].marks);
    }

    return 0;
}