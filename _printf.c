#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: parameter
 * ...: ellipsis
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	char c;
	int count = 0;

	va_list list_format;
	va_start(list_format, format);
	if (format == NULL)
		exit (-1);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				break;
			if (*format == 'c')
			{
				c = va_arg(list_format, int);
				write(1, &c, 1);
				count++;
			}
			if (*format == 's')
			{
				char *str = va_arg(list_format, char *);
				while (*str != '\0')
				{
					putchar(*str);
					str++;
					count++;
				}
			}
			if (*format == '%')
			{
				write(1, format, 1);
			}
			format++;
		}
		else
		{
			putchar(*format);
                        count++;
                }
		format++;
	}
	va_end(list_format);
	return (count);
}
