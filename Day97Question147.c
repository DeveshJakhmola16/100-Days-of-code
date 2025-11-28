//Store employee data in a binary file using fwrite() and read using fread().

#include <stdio.h>
#include <string.h>
#define MAX_NAME_LEN 100
struct Employee {
    char name[MAX_NAME_LEN];
    int id;
    float salary;
};
int main() {
    struct Employee emp;
    FILE *file;

    // Take employee data from user
    printf("Enter employee name: ");
    fgets(emp.name, sizeof(emp.name), stdin);
    emp.name[strcspn(emp.name, "\n")] = 0; // Remove newline character

    printf("Enter employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter employee salary: ");
    scanf("%f", &emp.salary);

    // Open binary file in write mode
    file = fopen("employee.dat", "wb");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Write employee data to binary file
    fwrite(&emp, sizeof(struct Employee), 1, file);
    fclose(file);

    // Clear the structure
    memset(&emp, 0, sizeof(struct Employee));

    // Open binary file in read mode
    file = fopen("employee.dat", "rb");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Read employee data from binary file
    fread(&emp, sizeof(struct Employee), 1, file);
    fclose(file);

    // Display employee data
    printf("\nEmployee Details:\n");
    printf("Name: %s\n", emp.name);
    printf("ID: %d\n", emp.id);
    printf("Salary: %.2f\n", emp.salary);

    return 0;
}