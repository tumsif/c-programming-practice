#include <stdio.h>
float decideFunction(float fNumber, float lNumber, int option)
{
    switch (option)
    {
    case 1:
        return fNumber * lNumber;
        break;
    case 2:
        return fNumber + lNumber;
        break;

    default:
        break;
    }
}
int main()
{
    float fnumber, lnumber;
    int choice;
    printf("First number: ");
    scanf("%f", &fnumber);
    printf("Second number: ");
    scanf("%f", &lnumber);
    printf("Your choice: ");
    scanf("%d", &choice);
    // recalling the result of function as a variable
    float decision = decideFunction(fnumber, lnumber, choice);
    // printing the outcome to see the results
    printf("%f\n", decision);
    return 0;
}

/*Aternatively we can use this*/

// float choiceOption(int option, float num1, float num2)
// {
//     float result;
//     if (option == 1)
//     {
//         result = num1 * num2;
//     }
//     else if (option == 2)
//     {
//         result = num1 + num2;
//     }
//     else
//     {
//         result = 0;
//     }
//     return result;
// }
// /*the above is the end of the function, the below code is for implementation*/

// #include <stdio.h>
// int main()
// {
//     float number1, number2, result;
//     int option;
//     printf("Enter you first number: ");
//     scanf("%f", &number1);
//     printf("Enter your second number: ");
//     scanf("%f", &number2);
//     printf("Choose your option\n");
//     printf("Choose 1 to multiply, 2 to add: ");
//     scanf("%d", &option);
//     result = choiceOption(option, number1, number2);
//     printf("%0.2f\n", result);
// }