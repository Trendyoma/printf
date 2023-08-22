#include "main.h"
/**
 * string_lit - function that prints a string
 * @str: string to be printed
 * Return: success
 */
void string_lit(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
}
