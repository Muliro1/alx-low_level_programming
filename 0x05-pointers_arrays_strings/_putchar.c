#include <unistd.h>

/**
 * _putchar - write
 * @c: The char
 * Return: On or 1
 */








int _putchar(char c)
{
	return (write(1, &c, 1));
}
