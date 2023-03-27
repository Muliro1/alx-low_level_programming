#include "main.h"

/**
 * puts2 - prints every other character
 * @str: input
 * Return: void
 */

void puts2(char *str)
{
	int count = 0;
	int t = 0;
	char *y = str;
	int b;

	while (*y != '\0')
	{
		y++;
		count++;
	}
	t = count - 1;
	for (b = 0; b <= t; b++)
	{
		if (b % 2 == 0)
		{
			_putchar(str[b]);
		}
	}
	_putchar('\n');
}
