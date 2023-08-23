int "main.h"
/**
 * print_percent - print the percent
 * @list_format: va_list
 * Return: count of what is printed
 */
int print_percent(va_list list_format)
{
	char percent;

	percent = '%';
	return (write(1, &percent, 1));
}
