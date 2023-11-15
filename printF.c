#include "main.h"

/**
 * _printf - Custom printf function for formatted output.
 * @format: Format string with specifiers (%s, %c, %%, %i, %d, etc.).
 * Return: Count of characters printed (excluding null byte).
 */
int _printf(const char * const format, ...)
{
	convert conv[] = {
		{"%s", prntStr}, {"%c", prntC},
		{"%%", prntPrcnt},
		{"%i", prntI}, {"%d", prntD}, {"%r", prntREVRS},
		{"%R", prntROT13}, {"%b", prntBIN},
		{"%u", prntUNSGN},
		{"%o", prntOCT}, {"%x", prntHEXAmin}, {"%X", prntHEXA},
		{"%S", prntSTRS}, {"%p", prntPNTR}
	};

	/* 'args' are the input arguments */
	va_list args;
	/* 'idx' and 'jdx' are used for calculations */
	int idx = 0, jdx, len = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[idx] != '\0')
	{
		jdx = 13;
		while (jdx >= 0)
		{
			if (conv[jdx].ph[0] == format[idx] && conv[jdx].ph[1] == format[idx + 1])
			{
				len += conv[jdx].function(args);
				idx = idx + 2;
				goto Here;
			}
			jdx--;
		}
		_putchar(format[idx]);
		len++;
		idx++;
	}
	va_end(args);
	return (len);
}
