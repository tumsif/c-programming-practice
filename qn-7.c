#include <stdio.h>
int main()
{
    int age;
    printf("Enter the age of the child: ");
    scanf("%d", &age);
    // if (age < 0 || age > 10)
    // {
    //     printf("Wrong entry\n");
    // }
    // else
    // {
    //     printf("Valid age\n");
    // }
    (age < 0 || age > 10) ? printf("Wrong Entry \n") : printf("Valid Age \n");

    return 0;
}
