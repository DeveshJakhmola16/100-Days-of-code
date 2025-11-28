//Find and print the student with the highest marks.

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
    struct Student students[5];
    struct Student *topStudent = NULL;
    int i;

    // Read details for 5 students
    for (i = 0; i < 5; i++) 
    {
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

    // Find the student with the highest marks
    for (i = 0; i < 5; i++) 
    {
        if (topStudent == NULL || students[i].marks > topStudent->marks) {
            topStudent = &students[i];
        }
    }

    // Print the top student's details
    if (topStudent != NULL) 
    {
        printf("\nTop Student Details:\n");
        printf("Name: %s\n", topStudent->name);
        printf("Roll Number: %d\n", topStudent->roll_no);
        printf("Marks: %.2f\n", topStudent->marks);
    }

    return 0;
}