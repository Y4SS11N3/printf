#include "main.h"

/**
 * prnthexa_uppr_min - Prints a number in hexadecimal format.
 * @numr: The number to be converted and printed.
 * Return: Number of hexadecimal digits printed.
 */
int prnthexa_uppr_min(unsigned long int numr)
{
	/* 'idx' is the index for iteration */
	long int idx;
	/* 'arr' is the array to store the hexadecimal digits */
	long int *arr;
	/* 'cnt' is the count of hexadecimal digits */
	long int cnt = 0;
	/* 'tmp' is used for calculations */
	unsigned long int tmp = numr;

	while (numr / 16 != 0)
	{
		numr /= 16;
		cnt++;
	}
	cnt++;
	arr = malloc(cnt * sizeof(long int));

	for (idx = 0; idx < cnt; idx++)
	{
		arr[idx] = tmp % 16;
		tmp = tmp / 16;
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
