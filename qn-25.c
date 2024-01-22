#include <stdio.h>
int main()
{
    int std, i, z;
    printf("Enter your number of your students: ");
    scanf("%d", &std);
    int marks[std][2];
    for (i = 0; i < std; i++)
    {
        printf("Student %d: \n", i + 1);
        for (z = 0; z < 2; z++)
        {
            printf("Subject %d ", z + 1);
            scanf("%d", &marks[i][z]);
        }
    }
    printf("Std   English  Kiswahili\n");
    for (int m = 0; m < std; m++)
    {
        printf("%d \t", m + 1);
        for (int q = 0; q < 2; q++)
        {
            printf("%d\t", marks[m][q]);
        }
        printf("\n");
    }

    return 0;
}

// alternatively

// #include <stdio.h>
//  int main()
//  {
//      int std_no;
//      printf("What is the number of students: ");
//      scanf("%d", &std_no);
//      int marks[2][std_no];

//     for (int j = 0; j < 2; j++)
//     {
//         (j == 0) ? printf("Enter marks for English: \n") : printf("Enter marks for Math: \n");
//         for (int i = 0; i < std_no; i++)
//         {
//             printf("%d: ", i + 1);
//             scanf("%d", &marks[j][i]);
//         }
//     }
//     printf("English    Math \n");
//     for (int j = 0; j < std_no; j++)
//     {
//         for (int i = 0; i < 2; i++)
//         {
//             printf("%d          ", marks[i][j]);
//         }
//         printf("\n");
//     }
// }
