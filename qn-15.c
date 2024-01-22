#include <stdio.h>
int main()
{
    // looping through 10 and 20
    int i;
    //<= used for inclusively
    for (i = 10; i <= 20; i++)
    {
        if (i % 2 == 0)

        {
            printf("%d\n", i);
        }
    }

    return 0;
}
