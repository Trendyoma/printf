#include "main.h"

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
	if (format == NULL)
	{
		va_end(list_format);
		exit(-1);
	}
	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			count++;
		}
		else
		{
			format++;
			if (*format == 'c')
			{
				c = va_arg(list_format, int);
					my_put(c);
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
