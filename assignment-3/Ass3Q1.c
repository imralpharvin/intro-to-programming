/**********************
Assignment 3 Question 1
Ralph Arvin De Castro
March 31/17
THis program merges contents of two files into a third file.
***********************/

#include<stdio.h>

int main (void)
{
    FILE* inFile1 = NULL;
    FILE* inFile2 = NULL;
    FILE* outFile = NULL;
    char file1[20] = "";
    char file2[20] = "";
    char file3[20] = "";

    //Open file 1
    printf("Opening file no.1.\n");
    inFile1 = fopen("myfile.txt", "r");
    if (inFile1 == NULL)
    {
        printf("error in files\n");
        return -1;
    }
    //Open file 2
    printf("Opening file no.2.\n");
    inFile2 = fopen("myfile2.txt", "r");
    if (inFile2 == NULL)
    {
        printf("error in files\n");
        return -1;
    }
    //Open file 3
    outFile = fopen("myfile3.txt", "w");
    if(outFile == NULL)
    {
        printf("Could not open file.\n");
        return -1;
    }
    //Writing files to new file.
    printf("Combining files into a new file.\n\n");
    while(fgets(file1, 20, inFile1) != NULL)
    {
        fprintf(outFile , "%s", file1);
    }
    fprintf(outFile,"\n");
    while(fgets(file2, 20, inFile2) != NULL)
    {
        fprintf(outFile, "%s", file2);
    }
    fprintf(outFile,"\n");
    fclose(outFile);
    //Reopens file 3 and print content.
    outFile = fopen("myfile3.txt", "r");
    if(outFile == NULL)
    {
        printf("error in files\n");
        return -1;
    }
    printf("Combining files successful:\n");
    while(fgets(file3, 20, outFile) != NULL)
    {
        printf("%s", file3);
    }
    //Closes all files
    fclose(inFile1);
    fclose(inFile2);
    fclose(outFile);
    return 0;
}
