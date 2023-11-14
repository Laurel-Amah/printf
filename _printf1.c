#include "main.h"

/**
 * _printf -  produces output according to a format.
 * @format: a character string
 *
 * Return: the number of characters printed.
 */
int _printf(const char *format, ...)
{
	int count = 0;

	va_list args;

	va_start(args, format);
	while (*format != '\0')
	{
		if (*format != '%')
		{
			_putchar(*format);
			count++;
		}
		else
		{
			switch (*++format)
			{
				case 'c':
					count += fprintf(stdout, "%c", va_arg(args, int));
					break;
				case 's':
					count += fprintf(stdout, "%s", va_arg(args, char *));
					break;
			}
		}
		format++;
	}

	va_end(args);
	return (count);
}
