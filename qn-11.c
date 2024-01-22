#include <stdio.h>
int main()
{
    int options;
    printf("Select one one the options between 1 and 4 ");
    scanf("%d", &options);
    switch (options)
    {
    case 1:
        printf("Checking Balance\n");
        break;
    case 2:
        printf("Cash Transfer\n");
        break;
    case 3:
        printf("Paying bills\n");
        break;
    case 4:
        printf("Cash out\n");
        break;
    default:
        break;
    }
    return 0;
}
