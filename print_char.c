#include "main.h"
/**
 * print_char- print a character
 * @valist: holds the argument
 * Return: 1
 */
int print_char(va_list valist)
{
	int count = 0;

	count += print_out(va_arg(valist, int));
	return (1);
}
