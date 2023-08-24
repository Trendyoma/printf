#include "main.h"
/**
 * print_percent - print the percent
 * @list_format: va_list
 * Return: count of what is printed
 */
int print_percent(va_list list_format __attribute__((unused)))
{
	char percent = '%';

	write(1, &percent, 1);
	return (1);
}
