#include <stdio.h>
int main()
{
    int i;
    // looping through numbers from 3 to 23
    for (i = 3; i < 23; i++)
    {
        // even numbers are numbers when divided by 2 has no reminder
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
