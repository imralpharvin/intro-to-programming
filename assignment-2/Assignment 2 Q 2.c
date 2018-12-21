#include <stdio.h>

int FindMax (int integer1, int integer2, int integer3)
{
    int maxValue = 0;

    if ((integer1 >= integer2) && (integer1 >= integer3))
    {
        maxValue = integer1;
    }

    else if ((integer2 >= integer1 && integer2 >= integer3))
    {
        maxValue = integer2;
    }

    else
    {
        maxValue = integer3;
    }

    return maxValue;
}

int main(void)
{
    int maxValue = 0;
    int integer1 = 0;
    int integer2 = 0;
    int integer3 = 0;

    printf("Enter integer 1:\n");
    scanf("%d", &integer1);
    printf("Enter integer 2:\n");
    scanf("%d", &integer2);
    printf("Enter integer 3:\n");
    scanf("%d", &integer3);

    maxValue = FindMax(integer1, integer2, integer3);

    printf("The largest value is: %d\n", maxValue);

    return 0;
}

/*1.Prompt the user to input three integers.
  2.Find the max value using the function and if statements.
  3.Print the output or the maximum value.*/