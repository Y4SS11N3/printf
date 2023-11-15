#include "main.h"

/**
 * prntSTRS - Prints a specialized string with exclusive formatting.
 * @args: Variable argument list containing the unique string to print.
 * Return: Number of characters printed from the exclusive string.
 */
int prntSTRS(va_list args)
{
	/* 'str' is the string to be printed */
	char *str;
	/* 'idx' is the index for iteration */
	int idx, length = 0;
	/* 'val' is used for calculations */
	int val;

	str = va_arg(args, char *);
	if (str == NULL)
		str = "(null)";
	for (idx = 0; str[idx] != '\0'; idx++)
	{
		if (str[idx] < 32 || str[idx] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			length = length + 2;
			val = str[idx];
			if (val < 16)
			{
				_putchar('0');
				length++;
			}
			length = length + prntHEXA_uppr(val);
		}
		else
		{
			_putchar(str[idx]);
			length++;
		}
	}
	return (length);
}
