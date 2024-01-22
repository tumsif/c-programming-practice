#include <stdio.h>
#include <math.h>
int main()
{
    float area, circumference, radius;
    const float pi = 3.14;
    printf("Enter the radius of the circle : ");
    scanf("%f", &radius);
    area = 3.14 * radius * radius;
    circumference = 2 * pi * radius;
    printf("The area is %.2f sq.cm, and the circumference is %.2f cm \n", area, circumference);
    return 0;
}
