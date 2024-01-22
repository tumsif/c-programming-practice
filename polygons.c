#include <stdio.h>
void makeSpace(int space)
{
    for (int i = 1; i <= space; i++)
        printf(" ");
}

void makeStar(int star)
{
    for (int i = 1; i <= star; i++)
        printf(" *");
}

void makeTriangle(int length)
{
    for (int i = 1; i < length; i++)
    {
        makeSpace(length - i);
        makeStar((2 * i) - 1);
        printf("\n");
    }
}

int main()
{
    int length;
    printf("Enter the lenght of the triangle: ");
    scanf("%d", &length);
    makeTriangle(length);
}