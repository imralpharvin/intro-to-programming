#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char userInput[20] = "";
    int i = 0;

    printf("Enter a word:\n");
    scanf(" %s", userInput);

    for(i = 0; i < strlen(userInput); ++i)
    {
        if(islower(userInput[i]))
        {
            userInput[i] = toupper(userInput[i]);
        }
    }
    printf("Your converted word:\n");
    printf("%s\n", userInput);

    return 0;
}

/*1.Prompt user to input a word.
  2.Using a loop and a c.type function, all the lowercase letters are converted to uppercase.
  3.Print the all uppercase word output*/