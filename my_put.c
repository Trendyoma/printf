#include <unistd.h>
#include <stdio.h>
/**
 * my_put - function to print a character
 * @c: variable of the character
 * Return: 1 on success
 */
int my_putch(char c)
{
	return (write(1, &c, 1));
}
