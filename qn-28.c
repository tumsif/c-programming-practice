// Write a program that accepts two numbers, num1 and num2, and swap them using pointers
#include <stdio.h>
int main()
{
    // initialized num3 - container for the third number
    //             number1 - to hold the first number.
    //             number2 - to hold the second number.
    int num3, number2, number1;
    // declaring pointer variable to hold memory addresses for number2 and number1
    int *num1 = &number1;
    int *num2 = &number2;
    // obtaing the values
    printf("Enter number1: ");
    scanf("%d", &number1);
    printf("Enter number2: ");
    scanf("%d", &number2);
    // performing exchange of memory addresses
    // num3 acts as the intermediate
    num3 = *num1;
    *num1 = *num2;
    *num2 = num3;
    // displaying the values
    printf("Num 1: %d\n", number1);
    printf("Num 2: %d\n", number2);
    // end of code
    return 0;
}
