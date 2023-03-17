#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Description: print the last random value
 *
 *
 *
 *
 *
 *
 * Return: always 0 (Success)
 */





int main(void)
{
		int n;
		int mine;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		mine = n % 10;
		if (mine > 5)
			printf("Last digit of %d is %d and is greater than 5", n, mine);
		else if (mine == 0)
			printf("Last digit of %d is %d and is 0", n, mine);
		else
			printf("Last digit of %d is %d and is less than 6 and not zero", n, mine);
		return (0);
}
