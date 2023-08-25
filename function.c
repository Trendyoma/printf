#include "main.h"
/**
 * function - checks conditions
 * @format: parameter
 * @list_format: parameter
 * Return: count of characters printed
 */
int function(const char *format, va_list list_format)
{
	int i, count = 0;
	op_t specifiers[] = {
		{'c', my_put},
		{'s', string_lit},
		{'%', print_percent},
		{'d', print_number},
		{'i', print_number}
	};
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
	return (count);
}
