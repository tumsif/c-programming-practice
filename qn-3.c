#include <stdio.h>
int main()
{
    char name[20];
    int yearBorn;
    printf("Please enter your last name: ");
    scanf("%s", name);
    printf("Enter your year of birth: ");
    scanf("%d", &yearBorn);
    printf("You are %s Born in the year %d \n", name, yearBorn);
    return 0;
}
