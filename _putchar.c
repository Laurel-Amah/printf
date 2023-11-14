#include <unistd.h>

/**
 * _putcahr - write character c to the stdout
 * @c: the character
 *
 * Return: 1 oon success and -1 otherwise
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
