#include <stdio.h>
void printNumber(int value)
{
    printf("%d\n", value);
}

void printString(char *string)
{
    /*type the string here to print the content*/
    printf("%s\n", string);
}

void printLoopStr(int content_no, char *strcontent)
{
    /*Enter the number of elements then enter the array of type string*/
    for (int i = 0; i < content_no; i++)
    {
        printf("%s\n", strcontent);
    }
}
void printLoopInt(int *intcontent, int size)
{
    /*pass the array and the array size as an argument*/
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", intcontent[i]);
    }
}
void printLoopFloat(int content_no, float *floatcontent)
{
    for (int i = 0; i < content_no; i++)
    {
        printf("%f\n", floatcontent[i]);
    }
}
float calcSumFloat(float num1, float num2)
{
    /*Note that this will require a type of float*/
    return num1 + num2;
}
