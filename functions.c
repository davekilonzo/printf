#include "main.h"
/**
 * print_string - prints a string
 * @s: the string to be printed
 * Return: the total strings printed
 */
int print_string(char *s)
{
	int i, count = 0;
	if (s == NULL)
		return (0);
	for (i = 0; s[i] != '\0'; i++)
	{
		count += _putchar(s[i]);
	}
	return (count);
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
int print_int (int t)
{
	int count = 0;
	int buffer;

	if (t < 0)
	{
		count += _putchar('-');
		t = -t;
	}
	if (t == 0)
	{
		count += _putchar(0);
	}
	while (t > 0)
	{
		buffer = t % 10;
		t /= 10;
		buffer *= 10;
	}
	while (buffer > 0)
	{
		count += _putchar ('0' + buffer % 10);
		buffer /= 10;
	}
	return (count);
}
int print_binary(unsigned int n)
{
	int count = 0;
	int i = 0, j;
	int binary[32];

	if (n == 0)
	{
		count += _putchar('0');
		return (count);
	}
	while (n > 0)
	{
		binary[i] = n % 2;
		n /= 2;
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		count += _putchar('0' + binary[j]);
	}
	return (count);
}
