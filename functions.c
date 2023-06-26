#include "main.h"
/**
 * print_string - prints a string
 * @s: the string to be printed
 * Return: the total strings printed
 */
int print_string(char *s)
{
	int count = 0;
	int i;

	if (s == NULL)
		return (0);
	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
		count++;
	}
	return (count);
}
