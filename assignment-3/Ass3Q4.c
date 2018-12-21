/*********************************
Assignment 3 Question 4
Ralph Arvin De Castro
March 31/17
This program allows the user to input a string.
The program counts the length of the string and reverses it.
********************************/

#include <stdio.h>

/******************************
 Function: string_length counts the length of string.
 Result: String length is counted and the value is returned.
*******************************/
int string_length(char* userinput)
{
    int i = 0;
    while(userinput[i] != '\0')
    {
        ++i;
    }
    --i;
    return i;
}
/*********************
 Function: reverse reverses the string provided by the user and prints it.
 Result: string is reversed and both original and reversed string is printed.
**********************/
void reverse(char* userinput)
{
    int j = 0;
    char tempVal;
    int stringLength = 0;

    stringLength = string_length(userinput);

    printf("\nYour input:\n%s", userinput);

    for(j = 0; j < (stringLength/2) ; j++)
    {
        tempVal = userinput[j];
        userinput[j] = userinput[stringLength - 1 -j];
        userinput[stringLength - 1 -j] = tempVal;
    }
    printf("Reversed input:\n%s", userinput);
return;
}

int main(void)
{
    char userinput[50];
    //Prompt user to input a string
    printf("Enter a string:\n");
    fgets(userinput, 50, stdin);
    //Calls functions
    string_length(userinput);
    reverse(userinput);
    return 0;
}
