#include <stdio.h>
#include <string.h>
int main()
{
    char surname[30];
    printf("Please enter your Surname: ");
    fgets(surname, sizeof(surname), stdin);
    int nameSize = strlen(surname);
    printf("Your Surname is %d characters long \n", nameSize);
    return 0;
}
