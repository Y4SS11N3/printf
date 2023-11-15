#include "main.h"

/**
 * prntREVRS - Displays a string in reverse order.
 * @args: Variable argument list containing the string to reverse.
 * Return: Number of characters in the reversed string.
 */
int prntREVRS(va_list args)
{

	/* 'str' is the string to be printed */
	char *str = va_arg(args, char*);
	/* 'idx' is the index for iteration */
	int idx;
	/* 'len' is the length of the string */
	int len = 0;

	if (str == NULL)
		str = "(null)";
	while (str[len] != '\0')
		len++;
	for (idx = len - 1; idx >= 0; idx--)
		_putchar(str[idx]);
	return (len);
}
