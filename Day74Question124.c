//Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

/*
Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/
#include <stdio.h>

int main() 
{
    char source[50], destination[50];
    FILE *fsrc, *fdest;
    int ch;
    // Take filenames from the user
    printf("Enter source filename: ");
    scanf("%s", source);
    printf("Enter destination filename: ");
    scanf("%s", destination);
    // Open source file in read mode
    fsrc = fopen(source, "r");
    if (fsrc == NULL) 
    {
        printf("Error: Could not open source file!\n");
        return 1;
    }
    // Open destination file in write mode
    fdest = fopen(destination, "w");
    if (fdest == NULL) 
    {
        fclose(fsrc);
        printf("Error: Could not create destination file!\n");
        return 1;
    }
    // Copy contents character-by-character
    while ((ch = fgetc(fsrc)) != EOF) 
    {
        fputc(ch, fdest);
    }
    // Close both files
    fclose(fsrc);
    fclose(fdest);
    printf("File copied successfully to %s\n", destination);
    return 0;
}