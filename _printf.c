#include "main.h"
/**
 * _printf - produces output according to a format
 * @format: parameter
 * ...: ellipsis
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	sp specifiers[] = {
		{'c', my_put},
		{'s', string_lit},
		{'%', print_percent}
	};
	int count = 0;
	va_list list_format;
	int i;

	va_start(list_format, format);
	if (format == NULL || strcmp(format, "% ") == 0)
		return (-1);
	while (*format)
	{
		if (*format == '\0')
			return (-1);
		if (*format != '%')
		{
			write(1, format, 1);
			count++;
		}
		else
		{
			format++;
			for (i = 0; i < (int)(sizeof(specifiers) / sizeof(specifiers[0])); i++)
			{
				if (specifiers[i].spec == *format)
				{
					count += specifiers[i].f(list_format);
					break;
				}
			}
			if (i == sizeof(specifiers) / sizeof(specifiers[0]))
				count += write(1, format - 1, 2);
		}
		format++;
	}
	va_end(list_format);
	return (count);
}

