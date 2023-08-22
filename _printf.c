#include "main.h"
#include <string.h>

/**
 * _printf - produces output according to a format
 * @format: parameter
 * ...: ellipsis
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int c, count = 0;
	va_list list_format;

	va_start(list_format, format);
	while (*format)
	{
		if (format == NULL || strcmp(format, "% i") == 0)
                return (-1);
		if (*format != '%')
		{
			write(1, format, 1);
			count++;
		}
		else
		{
			format++;
			if (*format == '\0')
				return (-1);
			if (*format == 'c')
			{
				c = va_arg(list_format, int);
				write(1, &c, 1);;
				count++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(list_format, char *);

				string_lit(str);
				count++;
			}
			else if (*format == '%')
			{
				write(1, format, 1);
				count++;
			}
		}
		format++;
	}
	va_end(list_format);
	return (count);
}
