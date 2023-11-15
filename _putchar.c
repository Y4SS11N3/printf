#include "main.h"
#include <unistd.h>
/**
 * _putchar - Outputs a single character to standard output.
 * @c: The specific character to be printed.
 * Return: Returns 1 if successful, -1 on error with errno updated.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
