// Use pointers to perform the multication of "thearr" array elements
#include <stdio.h>
int main()
{
    int k;
    float multiarr[7];
    float thearr[] = {2.5, 5, 6.7, 10, 13.3, 25, 0};
    for (int i = 0; i < 7; i++)
    {
        multiarr[i] = thearr[i] * 3;
    }
    for (int j = 0; j < 7; j++)
    {
        printf("%0.1f\n", multiarr[j]);
    }
    return 0;
}