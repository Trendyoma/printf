#include "main.h"
/**
 * string_lit - function that prints a string
 * @list_format: va_list
 * Return: success
 */
int string_lit(va_list list_format)
{
	int format = 0;
	char *str = va_arg(list_format, char *);

	if (str == NULL)
		str = "(null)";
	if (*str == '\0')
		format++;
	return (write(1, str, strlen(str)));
}
