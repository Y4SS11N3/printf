#include "main.h"

/**
 * _strlen - Measures the length of the provided string.
 * @s: String whose length is to be determined.
 * Return: Length of the string as an integer.
 */
int _strlen(char *s)
{
	/* 'idx' is the index for iteration */
	int idx;

	for (idx = 0; s[idx] != 0; idx++)
		;
	return (idx);
}

/**
 * _strlenc - Determines the length of a constant character string.
 * @s: Constant character string to evaluate.
 * Return: The number of characters in the string as an integer.
 */
int _strlenc(const char *s)
{
	/* 'idx' is the index for iteration */
	int idx;

	for (idx = 0; s[idx] != 0; idx++)
		;
	return (idx);
}
