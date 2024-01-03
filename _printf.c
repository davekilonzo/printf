#include "main.h"

/**
 * _printf - formatted output conversion and print data.
 * @format: input string.
 *
 * Return: number of chars printed.
 */
int _printf(const char *format, ...)
{
	va_list arguments;
	int count = 0;

	va_start(arguments, format);

	for (; *format != '\0'; format++)
	{
		if (*format == '%')
		{
			format++;

			if (*format == '\0')
				break;

			if (*format == '%')
			{
				putchar('%');
				count++;
			}
			else if (*format == 'c')
			{
				int value = va_arg(arguments, int);
				putchar(value);
				count++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(arguments, char *);
				for (int i = 0; str[i] != '\0'; i++)
				{
					putchar(str[i]);
					count++;
				}
			}
		}
		else
		{
			putchar(*format);
			count++;
		}
	}
	va_end(arguments);

	return count;
}
