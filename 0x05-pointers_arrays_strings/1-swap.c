#include "main.h"

/**
 * swap_int - swaps values of integers
 * @a: int
 * @b: int
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
