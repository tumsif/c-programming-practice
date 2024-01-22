#include <stdio.h>
int Multiply(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        array[i] *= 2;
    }
    return array[size];
}
/*the above is the end of the function the below code is for implementation*/
int main()
{
    int myArray[] = {2, 4, 5, 6, 10, 30};
    int sizeArray = sizeof(myArray) / sizeof(myArray[0]);
    Multiply(myArray, sizeArray);
    // this is for testing the outcome
    for (int i = 0; i < sizeArray; i++)
    {
        printf("%d\n", myArray[i]);
    }

    return 0;
}
