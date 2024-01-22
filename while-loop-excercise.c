#include <stdio.h>
int main()
{
    // NOTE: if you want to create a loop with unsure number
    // of iterations it is adviced to use this

    int userInput;
    printf("Enter your lucky number: ");
    while (1)
    {
        scanf("%d", &userInput);
        if (userInput == 10)
        {
            printf("Congratulations\n");
            break;
        }
        printf("Try again: ");
    }

    return 0;
}
