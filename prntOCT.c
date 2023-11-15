#include "main.h"

/**
 * prntOCT - Outputs a number in octal format.
 * @args: Variable argument list with the number to be printed in octal.
 * Return: Total number of octal digits displayed.
 */
int prntOCT(va_list args)
{
	/* 'idx' is the index for iteration */
	int idx;
	/* 'arr' is the array to store the octal digits */
	int *arr;
	/* 'cnt' is the count of octal digits */
	int cnt = 0;
	/* 'numr' is the number to be printed */
	unsigned int numr = va_arg(args, unsigned int);
	/* 'tmp' is used for calculations */
	unsigned int tmp = numr;

	while (numr / 8 != 0)
	{
		numr /= 8;
		cnt++;
	}
	cnt++;
	arr = malloc(cnt * sizeof(int));

	for (idx = 0; idx < cnt; idx++)
	{
		arr[idx] = tmp % 8;
		tmp /= 8;
	}
	for (idx = cnt - 1; idx >= 0; idx--)
	{
		_putchar(arr[idx] + '0');
	}
	free(arr);
	return (cnt);
}
