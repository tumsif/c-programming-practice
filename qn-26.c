#include <stdio.h>

int main()
{
    // declare container for no of students
    int std_no;
    // requesting the number of students
    printf("Enter your number of students here: ");
    scanf("%d", &std_no);
    // declaring container for std marks
    int marks[std_no];
    // collecting the marks in a for loop
    for (int i = 0; i < std_no; i++)
    {
        printf("Std %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
    // performing subtraction to each
    for (int j = 0; j < std_no; j++)
    {
        marks[j] -= 7;
        // contition for numbers less than 40
        if (marks[j] < 40)
        {
            marks[j] = 40;
        }
    }

    // EXTRA CODE for implementation
    printf("The following are marks after subtraction\n");

    for (int m = 0; m < std_no; m++)
    {
        printf("Std %d: %d\n", m + 1, marks[m]);
    }
}