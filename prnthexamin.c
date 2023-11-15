#include "main.h"

/**
 * prntHEXAmin - Prints a number in lowercase hexadecimal format.
 * @args: Variable argument list containing the number for conversion.
 * Return: Number of lowercase hexadecimal digits printed.
 */
int prntHEXAmin(va_list args)
{
	/* 'idx' is the index for iteration */
	int idx;
	/* 'arr' is the array to store the hexadecimal digits */
	int *arr;
	/* 'cnt' is the count of hexadecimal digits */
	int cnt = 0;
	/* 'numr' is the number to be printed */
	unsigned int numr = va_arg(args, unsigned int);
	/* 'tmp' is used for calculations */
	unsigned int tmp = numr;

	while (numr / 16 != 0)
	{
		numr /= 16;
		cnt++;
	}
	cnt++;
	arr = malloc(cnt * sizeof(int));

	for (idx = 0; idx < cnt; idx++)
	{
		arr[idx] = tmp % 16;
		tmp /= 16;
	}
	for (idx = cnt - 1; idx >= 0; idx--)
	{
		if (arr[idx] > 9)
			arr[idx] = arr[idx] + 39;
		_putchar(arr[idx] + '0');
	}
	free(arr);
	return (cnt);
}
