#include "main.h"

/**
 * prntROT13 - Encodes and prints a string using ROT13 cipher.
 * @args: Variable argument list with the string for ROT13 conversion.
 * Return: Total number of characters printed after conversion.
 */
int prntROT13(va_list args)
{
	/* 'idx', 'jdx', 'cnt' are used for calculations */
	int idx, jdx, cnt = 0;
	/* 'flag' is used to check if the character is converted */
	int flag = 0;
	/* 'str' is the string to be printed */
	char *str = va_arg(args, char*);
	/* 'al' and 'bl' are used for rot13 conversion */
	char al[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char bl[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (str == NULL)
		str = "(null)";
	for (idx = 0; str[idx]; idx++)
	{
		flag = 0;
		for (jdx = 0; al[jdx] && !flag; jdx++)
		{
			if (str[idx] == al[jdx])
			{
				_putchar(bl[jdx]);
				cnt++;
				flag = 1;
			}
		}
		if (!flag)
		{
			_putchar(str[idx]);
			cnt++;
		}
	}
	return (cnt);
}
