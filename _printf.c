#include "main.h"
/**
 * _printf - produces output according to a format
 * @format: parameter
 * ...: ellipsis
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list list_format;

	va_start(list_format, format);
	if (format == NULL || strcmp(format, "% ") == 0)
		return (-1);
	count = function(format, list_format);
	va_end(list_format);
	return (count);
}

