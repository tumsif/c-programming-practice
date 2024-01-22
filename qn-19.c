#include <stdio.h>
int ageCheck(int age)
{
    if (age > 0 && age < 100)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int age;
    printf("Enter Your age: ");
    scanf("%d", &age);
    printf("your response is %d\n", ageCheck(age));
    return 0;
}
