#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...)
{
    int count = 0;  /* To count the number of characters printed */

    va_list args;
    va_start(args, format);

    for (; *format != '\0'; format++)
    {
        if (*format == '%')
        {
            format++;
            switch (*format)
            {
            case 'c':
                putchar(va_arg(args, int));
                count++;
                break;
            case 's':
                count += printf("%s", va_arg(args, char *));
                break;
            case '%':
                putchar('%');
                count++;
                break;
            default:
                putchar('%');
                putchar(*format);
                count += 2;
                break;
            }
        }
        else
        {
            putchar(*format);
            count++;
        }
    }

    va_end(args);

    return count;
}
