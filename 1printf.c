#include "main.h"

/**
 * _printf - print the standard output string
 *
 * @format: a function to handle %s.
 * Description: the format string is composed of zero or more directives
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;

	unsigned int index;
	int count = 0;

	va_start(args, format);

	for (index = 0; format[index] != '\0'; index++)
	{
		if (format[index] == '%')
		{
			teefa_ptchr(format[index]);
		}
		else if (format[index] == '%' && format[index + 1] == 'c')
		{
			teefa_ptchr(va_arg(args, int));
			index++;
		}
		count++;
	}
	va_end(args);
	return (count);
}
