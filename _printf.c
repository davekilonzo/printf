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
	char c;
	char *string;
	va_list args;

	if (format == NULL || *format == '\0')
		return (0);
	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			++i;
			if (format[i] == 'c')
			{
				c = va_arg(args, int);
				count = _putchar(c);
				continue;
			}
			else if (format[i] == 's')
			{
				string = va_arg(args, char *);
				count += print_string(string);
				continue;
			}
			else if (format[i] == '%')
			{
				count += _putchar('%');
				continue;
			}
			else
			{
				;
			}
		}
		_putchar(format[i]);
		count++;
	}
	va_end(args);
	return (count);
}
