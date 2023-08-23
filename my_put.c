#include "main.h"
/**
 * my_put - function to print a character
 * @list_format: va_list
 * Return: 1 on success
 */
int my_put(va_list list_format)
{
	int c;

	c = va_arg(list_format, int);
	return (write(1, &c, 1));
}
