#include "main.h"

/**
 * printUNSGN - Prints an unsigned integer from provided arguments.
 * @args: Variable argument list containing the unsigned integer.
 * Return: Number of digits printed from the unsigned integer.
 */
int prntUNSGN(va_list args)
{
	/* 'numr' is the number to be printed */
	unsigned int numr = va_arg(args, unsigned int);
	/* 'numr1', 'lastDigit', 'dig', 'exp' are used for calculations */
	int numr1, lastDigit = numr % 10, dig, exp = 1;
	/* 'idx' is the index for iteration */
	int idx = 1;

	numr = numr / 10;
	numr1 = numr;

	if (lastDigit < 0)
	{
		_putchar('-');
		numr1 = -numr1;
		numr = -numr;
		lastDigit = -lastDigit;
		idx++;
	}
	if (numr1 > 0)
	{
		while (numr1 / 10 != 0)
		{
			exp = exp * 10;
			numr1 = numr1 / 10;
		}
		numr1 = numr;
		while (exp > 0)
		{
			dig = numr1 / exp;
			_putchar(dig + '0');
			numr1 = numr1 - (dig * exp);
			exp = exp / 10;
			idx++;
		}
	}
	_putchar(lastDigit + '0');

	return (idx);
}
