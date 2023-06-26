#include "main.h"
/**
 * _printf - prints a formated string
 * @format: the format string
 * Return: the characters printed
 */
int _printf(const char *format, ...)
{
	int i;
	int count = 0;
	va_list args;

	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%' && format[i + 1] != ' ')
		{
			if (format[i + 1] == 'c')
			{
				count = _putchar(va_arg(args, int));
			}
			else if (format[i + 1] == 's')
			{
				count += print_string(va_arg(args, char *));
			}
			else if (format[i + 1] == '%')
			{
				count += _putchar('%');
			}
			else
			{
				;
			}
			i += 1;
		}
		else
		{
			count += _putchar(format[i]);
		}
	}
	va_end(args);
	return (count);
}
