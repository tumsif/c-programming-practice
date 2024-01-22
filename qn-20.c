#include <stdio.h>

void Subtract(int size, int array[])
{
    for (int i = 0; i < size; i++)
    {
        array[i] -= 7;
    }
}
/*the above is the end of the function the below code is for implementation*/
int main()
{
    int myArray[] = {20, 21, 22, 203, 24, 25};
    int arraysize = sizeof(myArray) / sizeof(myArray[0]);
    Subtract(arraysize, myArray);
    // addition in order to observe the outcome
    for (int i = 0; i < arraysize; i++)
    {
        printf("%d\n", myArray[i]);
    }

    return 0;
}
// correct