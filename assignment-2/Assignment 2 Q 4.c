#include <stdio.h>
#include <string.h>

void ConvertPlural(char userInput[])
{
    int n = 0;
    n = strlen(userInput);

    if(userInput[n - 1] == 's')
    {
        strcat(userInput, "es");
    }

    else if((userInput[n - 2] == 'c') && (userInput[n-1] == 'h'))
    {
        strcat(userInput, "es");
    }

    else if((userInput[n-2]) == 's' && (userInput[n - 1] == 'h'))
    {
        strcat(userInput, "es");
    }

    else
    {
        strcat(userInput, "s");
    }

    return;
}

int main(void)
{
    char userInput[10] = "";

    printf("Enter a noun:\n");
    scanf(" %s", userInput);
    printf("Your word: %s\n", userInput);

    ConvertPlural(userInput);
    printf("Plural form: %s\n", userInput);

    return 0;
}

/*1.Prompt the user to input a noun.
  2.Use or call the function that converts singular words to plural words.
  3.Print the singular entered by the user and the converted plural words.*/