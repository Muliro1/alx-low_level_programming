#include "main.h"

/**
 * _abs - check the code
 * Return: Always 0
 * @c: the number
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;

		return (abs_val);
	}
	return (c);
}
