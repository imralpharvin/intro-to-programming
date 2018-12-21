/**************************
Assignment 3 Question 3
Ralph Arvin De Castro
March 31/17
This program allows the user to enter input for university address and
display the data using the function display
*************************/

#include <stdio.h>

//Defining the structure University Address
typedef struct UniversityAddress_Struct
{
    char name[30];
    char location[30];
    char city[30];
} UniversityAddress;

/*********************************
 display: prints userData provided by the user.
 Result: The name, location and city is printed.
*********************************/
void display(UniversityAddress userData)
{
    printf("\nName: %s", userData.name);
    printf("Location: %s", userData.location);
    printf("City: %s\n", userData.city);
    return;
}

int main(void)
{
    UniversityAddress userData;
    //Asks user to input data.
    printf("Enter name:\n");
    fgets(userData.name, 30,stdin);
    printf("Enter location:\n");
    fgets(userData.location, 30, stdin);
    printf("Enter city:\n");
    fgets(userData.city, 30, stdin);
    //Calling the function display
    display(userData);
    return 0;
}