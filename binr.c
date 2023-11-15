#include "main.h"

/**
 * prntBIN - Converts and displays an argument as a binary number.
 * @args: Variable argument list containing the number to be converted.
 * Return: Count of digits printed in binary format.
 */
int prntBIN(va_list args)
{
	/* 'flag' is used to check if the binary number has started */
	int flag = 0;
	/* 'cnt' is the count of binary digits printed */
	int cnt = 0;
	/* 'idx', 'a', 'b' are used for calculations */
	int idx, a = 1, b;
	/* 'numr' is the number to be printed */
	unsigned int numr = va_arg(args, unsigned int);
	/* 'p' is used for calculations */
	unsigned int p;

	for (idx = 0; idx < 32; idx++)
	{
		p = ((a << (31 - idx)) & numr);
		if (p >> (31 - idx))
			flag = 1;
		if (flag)
		{
			b = p >> (31 - idx);
			_putchar(b + 48);
			cnt++;
		}
	}
	if (cnt == 0)
	{
		cnt++;
		_putchar('0');
	}
	return (cnt);
}
