#include "main-library.c"
#include <stdio.h>
int main()
{
    int numbers[] = {90, 100, 500, 80, 30, 50};
    printString("Hello there tumsifu how are you");
    int size = sizeof(numbers) / sizeof(numbers[0]);
    printLoopInt(numbers, size);
    return 0;
}
