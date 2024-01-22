#include <stdio.h>

int main()
{
    float length, perimeter, area;
    printf("please enter length of the square ");
    scanf("%f", &length);
    perimeter = 4 * length;
    area = length * length;
    printf("The area is %.2f sq.cm and the perimeter is %.2f cm ", area, perimeter);
}