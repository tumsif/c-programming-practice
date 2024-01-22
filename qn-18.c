#include <stdio.h>
float Area(float radius)
{
    const float pie = 3.142;
    return pie * radius * radius;
}

int main()
{
    float radius, area;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    area = Area(radius);
    printf("The area of the circle is %0.2f units \n", area);
    return 0;
}
