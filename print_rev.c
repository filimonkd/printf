#include "main.h"
/**
 * print_rev - print the string in reverse
 * @valist: va_list argumnet from _printf function
 * Return: number of character printed
 */
int print_rev(va_list valist)
{
	int i = 0, j;
	char *str;

	str = va_arg(valist, char *);
	if (str == NULL)
		str = "(null)";
	while (str[i])
		i++;
	for (j = i - 1; j >= 0; j--)
	{
		print_out(str[j]);
	}
	return (i);
}
