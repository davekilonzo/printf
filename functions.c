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
	int i, j;
	int binary[32];

	if (n == 0)
	{
		count += _putchar('0');
		return (count);
	}
	for (i = 0; i < 32; i++)
		binary[i] = 0;
	binary[i] = '\0';
	i--;
	while (n > 0)
	{
		binary[i--] = ((n % 2) + '0');
		n /= 2;
	}
	i = 0;
	for (j = 0; j < 32; j++)
	{
		if (binary[i] >= '0')
		{
			count += _putchar(binary[i++]);
		}
	}
	return (count);
}
