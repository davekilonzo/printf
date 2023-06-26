#include <unistd.h>
/**
 * _putchar - prints a character
 * @c: the character to be printed
 * Return: the number of characters to be printed
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
