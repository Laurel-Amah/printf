#include "main.h"

/**
 * print_oct - prints an octadecimal number
 * @val: parameter
 *
 * Return: count
 */
int print_oct(va_list val)
{
	int i;
	int *array;
	int count = 0;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int tem = num;

	while (num / 8 != 0)
	{
		num /= 8;
		count++;
	}
	count++;
	array = malloc(count * sizeof(int));

	for (i = 0; i < count; i++)
	{
		array[i] = tem % 8;
		tem /= 8;
	}
	for (i = count - 1; i >= 0; i--)
	{
		_putchar(array[i] + '0');
	}
	return (count);
}
