#include <stdio.h>
#include <string.h>
int main()
{
    char password[15];
    printf("Enter your password: ");
    scanf("%s", password);
    if (strlen(password) >= 7)
    {
        printf("Sufficient\n");
    }
    else
    {
        printf("Insufficient\n");
    }

    return 0;
}
