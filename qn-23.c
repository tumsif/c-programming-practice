#include <stdio.h>
int main()
{
    int marks[5];
    int i;
    printf("S/N : Marks \n");
    for (i = 0; i < 5; i++)
    {
        printf("%d   : ", i + 1);
        scanf("%d", &marks[i]);
    }
    printf("\n");
    printf("Your stored marks are [ ");
    for (i = 0; i < 5; i++)
    {
        printf("%d, ", marks[i]);
    }
    printf("]\n");
    return 0;
}
