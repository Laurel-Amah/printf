#include "main.h"

/**
 * print_HEX_extra - prints a hexadecimal number
 * @num: number to print
 *
 * Return: count
 */
int print_HEX_extra(unsigned int num)
{
	int i;
	int *array;
	int count = 0;
	unsigned int tem = num;

	while (num / 16 != 0)
	{
		num /= 16;
		count++;
	}
	count++;
	array = malloc(count * sizeof(int));

	for (i = 0; i < count; i++)
	{
		array[i] = tem % 16;
		tem /= 16;
	}
	for (i = count - 1; i >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 7;
		_putchar(array[i] + '0');
	}
	free(array);
	return (count);
}
