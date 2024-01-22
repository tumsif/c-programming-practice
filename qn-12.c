#include <stdio.h>
int main()
{
    long int salary, tax;
    printf("Please enter your salary: ");
    scanf("%ld", &salary);
    if (salary <= 170000)
    {
        tax = salary * 0;
        printf("Your income tax is 0%% \n");
    }
    else if (salary > 170000 && salary <= 360000)
    {
        tax = salary * 11 / 100;
        printf("Your income tax is 11%%ual to %ld\n", tax);
    }
    else if (salary > 540000 && salary <= 720000)
    {
        tax = salary * 25 / 100;
        printf("Your income tax is 25%% equal to %ld\n", tax);
    }
    else
    {
        tax = salary * 30 / 100;
        printf("Your income tax is 30%% equal to %ld\n", tax);
    }

    return 0;
}
