#include <stdio.h>
#include <ctype.h>
int main()
{
    char name[20];
    printf("Enter your First Name: ");
    scanf("%s", name);
    name[0] = toupper(name[0]);
    printf("Your first name is: %s\n", name);
    return 0;
}
