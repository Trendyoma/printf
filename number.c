#include "main.h"
/**
 * print_number - prints numbers
 * @format_list: parameter
 * Return: characters printed
 */
int print_number(va_list format_list)
{
	int temp, i;
	char buffer[12];
	int num = va_arg(format_list, int);
	int length = 0;
	int negative = 0;

	if (num < 0)
	{
		negative = 1;
		num = -num;
	}
	if (num == 0)
		buffer[length++] = '0';
	else
	{
		temp = num;
		while (temp > 0)
		{
			buffer[length++] = (char)((temp % 10) + '0');
			temp = temp / 10;
		}
	}
	if (negative)
		write(1, "-", 1);
	for (i = 0; i < length / 2; i++)
	{
		char temp = buffer[i];

		buffer[i] = buffer[length - 1 - i];
		buffer[length - 1 - i] = temp;
	}
	return (write(1, buffer, length));
}


