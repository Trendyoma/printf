#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: parameter
 * ...: ellipsis
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int c;
	int count = 0;
	va_list list_format;

	va_start(list_format, format);
	if (format == NULL)
		exit(-1);
	while (*format)
	{
		if (*format != '%')
                {
			putchar(*format);
			count++;
			format++;
		}

		else
		{
			format++;
			if (*format == '\0')
				break;
			if (*format == 'c')
			{
				c = va_arg(list_format, int);
					my_put(c);
					count++;
			}
			if (*format == 's')
			{
				char *str = va_arg(list_format, char *);
				string_lit(str);
				count++;
			}
			if (*format == '%')
			{
				putchar('%');
			}
			format++;
		}
	}
	va_end(list_format);
	return (count);
}
