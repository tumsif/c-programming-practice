#include <stdio.h>
int main()
{
    int i, no_std;
    printf("Enter your number of students: ");
    scanf("%d", &no_std);
    int marks[no_std];
    int size = sizeof(marks) / sizeof(marks[0]);
    printf("S/N : Marks\n");
    for (i = 0; i < size; i++)
    {
        printf("%d   : ", i + 1);
        scanf("%d", &marks[i]);
    }
    printf("\n");
    printf("Your stored marks are [ ");
    for (i = 0; i < size; i++)
    {
        printf("%d, ", marks[i]);
    }
    printf(" ]");

    return 0;
}
