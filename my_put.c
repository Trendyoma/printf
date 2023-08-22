#include <unistd.h>
#include <stdio.h>
/**
 * my_put - function to print a character
 * @a: variable of the character
 * Return: 1 on success
 */
int my_put(char a)
{
	int d;

	d = putchar(a);
	return (d);
}
