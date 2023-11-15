#include "main.h"

/**
 * prntI - Prints an integer from the provided arguments.
 * @args: Variable argument list containing the integer to be printed.
 * Return: Number of characters printed.
 */
int prntI(va_list args)
{
	/* 'numr' is the number to be printed */
	int numr = va_arg(args, int);
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

/**
 * prntD - Outputs a decimal number from the arguments.
 * @args: Variable argument list containing the decimal to print.
 * Return: Count of digits displayed.
 */
int prntD(va_list args)
{
	/* 'numr' is the number to be printed */
	int numr = va_arg(args, int);
	/* 'numr1', 'lastDigit', 'dig', 'exp' are used for calculations */
	int numr1, lastDigit = numr % 10, dig;
	/* 'idx' is the index for iteration */
	int idx = 1;
	int exp = 1;

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
