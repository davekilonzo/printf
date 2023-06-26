#include <stdio.h>
#include <stdarg.h>

int _printf(const char* format, ...);

int main() {
    char ch = 'A';
    char* str = "Hello, World!";
    int num_chars;

    printf("Using standard printf:\n");

    printf("Character: %c\n", ch);
    printf("Percentage sign: %%\n");
    printf("String: %s\n", str);

    printf("\nUsing _printf:\n");

    num_chars = _printf("Character: %c\n", ch);
    num_chars += _printf("Percentage sign: %%\n");
    num_chars += _printf("String: %s\n", str);

    printf("\nTotal number of characters printed: %d\n", num_chars);

    return 0;
}
