#include "main.h"
/**
 * print_string - prints a string
 * @s: the string to be printed
 * Return: the total strings printed
 */
int print_string(char *s)
{
	if (s == NULL)
		return (0);
	return (write(1, s, _strlen(s)));
}
/**
 * _strlen - checks the length of a string
 * @s: the string
 * Return:the str length
 */
int _strlen(char *s)
{
	int i, len = 0;

	while (s != NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			len++;
		}
		break;
	}
	return (len);
}
