#include <unistd.h>
#include <stdio.h>
/**
 * my_put - function to print a character
 * @a: variable of the character
 * Return: 1 on success
 */
void my_put(char a)
{
	write(1, &a, 1);
}
