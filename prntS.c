#include "main.h"

/**
 * prntStr - Outputs a string to the standard output.
 * @args: Variable argument list containing the string to be printed.
 * Return: Number of characters in the printed string.
 */
int prntStr(va_list args)
{
	/* 's' is the string to be printed */
	char *s;
	/* 'idx' is the index for iteration */
	int idx;
	/* 'lnt' is the length of the string */
	int lnt;

	s = va_arg(args, char *);
	if (s == NULL)
	{
		s = "(null)";
		lnt = _strlen(s);
		for (idx = 0; idx < lnt; idx++)
			_putchar(s[idx]);
		return (lnt);
	}
	else
	{
		lnt = _strlen(s);
		for (idx = 0; idx < lnt; idx++)
			_putchar(s[idx]);
		return (lnt);
	}
}
