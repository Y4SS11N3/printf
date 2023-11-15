#include "main.h"

/**
 * prntC - Displays a single character from the argument list.
 * @args: Variable argument list containing the character to print.
 * Return: 1 on successful print, otherwise an error code.
 */
int prntC(va_list args)
{
	/* 'c' is the character to be printed */
	char c;

	c = va_arg(args, int);
	_putchar(c);
	return (1);
}
