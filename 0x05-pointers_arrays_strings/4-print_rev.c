#include "main.h"

/**
 * print_rev - reverse
 * @s: string
 * Return: 0
 */

void print_rev(char *s)
{
	int count = 0;
	int b;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	s--;
	for (b = count; b > 0; b--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
