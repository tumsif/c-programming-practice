#include <stdio.h>
int main()
{
    int min, max, i, sum = 0;
    printf("Enter your minimum number: ");
    scanf("%d", &min);
    printf("Enter your maximum number: ");
    scanf("%d", &max);
    for (i = min; i <= max; i++)
    {
        if (i % 2 != 0)
        {
            sum = sum + i;
        }
    }
    printf("%d\n", sum);

    return 0;
}
