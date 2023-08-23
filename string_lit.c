#include "main.h"
/**
 * string_lit - function that prints a string
 * @list_format: va_list
 * Return: success
 */
int string_lit(va_list list_format)
{
	char *str;

	if (str == NULL)
		str = 'NULL';
	str = va_arg(list_format, char *);
	return (write(1, str, strlen(str)));
}
