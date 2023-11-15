#include "main.h"

/**
 * prntPNTR - Prints the memory address held by a pointer.
 * @args: Variable argument list containing the pointer to display.
 * Return: Number of characters in the printed memory address.
 */
int prntPNTR(va_list args)
{
	/* 'ptr' is the pointer to be printed */
	void *ptr;
	/* 'nilStr' is the string to be printed when the pointer is NULL */
	char *nilStr = "(nil)";
	/* 'numr' is used for calculations */
	long int numr;
	/* 'cnt' is the count of hexadecimal digits */
	int cnt;
	/* 'idx' is the index for iteration */
	int idx;

	ptr = va_arg(args, void*);
	if (ptr == NULL)
	{
		for (idx = 0; nilStr[idx] != '\0'; idx++)
		{
			_putchar(nilStr[idx]);
		}
		return (idx);
	}

	numr = (unsigned long int)ptr;
	_putchar('0');
	_putchar('x');
	cnt = prnthexa_uppr_min(numr);
	return (cnt + 2);
}
