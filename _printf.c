#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * _print_str - Prints a string to stdout.
 * @str: The string to print.
 *
 * Return: The number of characters printed.
 */
int _print_str(char *str)
{
    int count = 0;

    while (*str)
    {
        write(1, str, 1);
        str++;
        count++;
    }

    return count;
}

/**
 * _printf - Prints formatted output to stdout.
 * @format: A pointer to a string that contains the text to be written.
 *
 * Return: The number of characters printed (excluding the null byte).
 */
int _printf(const char *format, ...)
{
    va_list args;
    int count = 0;

    va_start(args, format);

    while (*format)
    {
        if (*format != '%')
        {
            /* If not a conversion specifier, simply print the character */
            write(1, format, 1);
            count++;
        }
        else
        {
            /* Move to the next character after '%' */
            format++;

            /* Check for conversion specifier */
            switch (*format)
            {
                case 'c':
                    /* Fetch char argument, print it */
                    count++;
                    {
                        char c = (char)va_arg(args, int);
                        write(1, &c, 1);
                    }
                    break;
                case 's':
                    /* Fetch string argument, print it */
                    {
                        char *str = va_arg(args, char *);
                        count += _print_str(str);
                    }
                    break;
                case '%':
                    /* Print '%' character */
                    count++;
                    write(1, "%", 1);
                    break;
                default:
                    /* Handle unsupported format specifier */
                    write(1, "%", 1); /* Print '%' */
                    write(1, format, 1); /* Print the unknown character */
                    count += 2;
                    break;
            }
        }

        format++; /* Move to the next character in the format string */
    }

    va_end(args);

    return count;
}

