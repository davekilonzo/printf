#include <stdio.h>
#include "main.h"

int main(void)
{
    _printf("This is a test: %c, %s, %%\n", 'A', "Hello, World!");

    // Fix the format specifier here
    printf("Unknown:[%%r]\n");

    return 0;
}
