/************************
Assignment 3 Question 2
Ralph Arvin De Castro
March 31/17
This program allows the user to input names and marks of n students
into a file and display it after.
*********************/

#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE* studentFile = NULL;
    char studentName[30] = "";
    char fileContent[50] = "";
    int studentMarks = 0;
    int n = 1;
    int i = 0;

    //Opens file
    studentFile = fopen("StudentMarks.txt", "a");
    if (studentFile == NULL)
    {
        printf("Could not open file.\n");
        return -1;
    }
    //Ask user to input number of students
    printf("Enter number of students:\n");
    scanf("%d", &n);
    getchar();
    //Ask user to input names and marks n times
    for(i = 0; i < n; ++i)
    {
        printf("Enter student name:\n");
        fgets(studentName, 30,stdin);
        printf("Enter student mark:\n");
        scanf("%d", &studentMarks);
        getchar();
        fprintf(studentFile,"Name:%sMark:%d\n\n", studentName, studentMarks);
    }
    fclose(studentFile);
    printf("\n");
    //Opening file again to print contents of the file
    studentFile = fopen("StudentMarks.txt", "r");
    if(studentFile == NULL)
    {
        printf("Could not open file.\n");
        return -1;
    }
    while(fgets(fileContent, 50, studentFile) != NULL)
    {
        printf("%s", fileContent);
    }
    return 0;
}
