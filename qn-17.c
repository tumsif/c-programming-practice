#include <stdio.h>
#include <string.h>
int main()
{
    int min, max, sum = 0, i;
    char e_o_value[4];
    printf("Enter your minimum number: ");
    scanf("%d", &min);
    printf("Enter your maximum number: ");
    scanf("%d", &max);
    printf("Choose the sum of (even/odd): ");
    scanf("%s", e_o_value);
    if (strcmp(e_o_value, "even") == 0)
    {
        for (i = min; i <= max; i++)
        {
            if (i % 2 == 0)
            {
                sum = sum + i;
            }
        }
        printf("The sum of even numbers is %d\n", sum);
    }
    else if (strcmp(e_o_value, "odd") == 0)
    {
        for (i = min; i <= max; i++)
        {
            if (i % 2 != 0)
            {
                sum = sum + i;
            }
        }
        printf("The sum of odd numbers is %d\n", sum);
    }
    else
    {
        printf("input not recognized\n");
    }

    return 0;
}
