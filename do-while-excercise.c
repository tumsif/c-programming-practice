#include <stdio.h>
int main()
{
    // it is to note that do while is used to write iterative method that runs first then checks if the condition is true
    // in this case before if condition is false it gives only one output then terminate the iteration
    int i = 0;
    do
    {
        printf("hello world\n");
        i++;
    } while (i < 10);

    return 0;
}
