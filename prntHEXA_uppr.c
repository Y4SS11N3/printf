#include "main.h"

/**
 * prntHEXA_uppr - Prints a number in uppercase hexadecimal format.
 * @numr: Number to be converted to uppercase hexadecimal.
 * Return: Number of uppercase hexadecimal digits printed.
 */
int prntHEXA_uppr(unsigned int numr)
{
	/* 'idx' is the index for iteration */
	int idx;
	/* 'arr' is the array to store the hexadecimal digits */
	int *arr;
	/* 'cnt' is the count of hexadecimal digits */
	int cnt = 0;
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
			arr[idx] = arr[idx] + 7;
		_putchar(arr[idx] + '0');
	}
	free(arr);
	return (cnt);
}
