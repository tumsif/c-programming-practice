#include <stdio.h>
int main()
{
    float principal, rate, time, simpleInt;
    printf("Please enter the principal amount: ");
    scanf("%f", &principal);
    printf("Please enter rate (per annum): ");
    scanf("%f", &rate);
    printf("Please enter the time (in years): ");
    scanf("%f", &time);
    simpleInt = (principal * rate * time) / 100;
    printf("The simple interest rate will be %.2f \n", simpleInt);
    return 0;
}
