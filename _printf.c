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
	char *str;
	va_list list_format;

	va_start(list_format, format);
	if (format == NULL || strcmp(format, "% ") == 0)
		return (-1);
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
			if (*format == '\0')
				return (-1);
			if (*format == 'c')
			{
				c = va_arg(list_format, int);
				count += write(1, &c, 1);
			}
			else if (*format == 's')
			{
				str = va_arg(list_format, char *);
				string_lit(str);
				count++;
			}
			else if (*format == '%')
			{
				count += write(1, format, 1);
			}
		}
		format++;
	}
	va_end(list_format);
	return (count);
}
