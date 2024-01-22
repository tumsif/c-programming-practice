#include <stdio.h>
int main()
{
    int k;
    float thearr[] = {2.5, 5, 6.7, 10, 13.3, 25, 0};
    for (int i = 0; i < 7; i++)
    {
        printf("%0.1f\n", *(thearr + i));
    }
    return 0;
}