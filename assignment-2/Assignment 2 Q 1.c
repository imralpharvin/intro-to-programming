#include <stdio.h>
#include <string.h>

int main(void)
{

    char bigInput[50] = "";
    char smallInput[30] = "";
    int posNumber = 0;
    char combineInput[80] = "";
    char tempInput[50] = "";
    int i = 0;

    printf("Enter a string(Max 50 characters):\n");
    scanf(" %s", bigInput);
    printf("Enter another string to be inserted from the last string(Max 30 characters):\n");
    scanf(" %s", smallInput);
    printf("Enter position of where to insert the string:\n");
    scanf("%d", &posNumber);

    for (i = 0 ; i < strlen(bigInput); ++i)
    {
        tempInput[i] = bigInput[i + posNumber-1];
    }

    bigInput[posNumber-1] = '\0';
    strcat(smallInput, tempInput);
    strcat(bigInput, smallInput);
    strcpy(combineInput, bigInput);

    printf("The new word is:\n");
    printf("%s\n", combineInput);

    return 0;
}

/*1.Prompt the user to input main string, substring and the position of where to insert the substring.
  2.The main string is divided into two parts.
  3 Concatenate the second part of the main string to the end of the substring.
  4.Concatenate the concatenated string to the end of the first part of the main string.
  5.Copy the last string created to a new string.
  6.Print the output or the new string.*/