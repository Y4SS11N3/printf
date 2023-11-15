#ifndef MAIN_H
#define MAIN_H
#include <limits.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>


#define MINUS 1
#define PLUS 2
#define ZERO 4
#define HASH 8
#define SPACE 16

#define LONG 2
#define SHORT 1


/**
 * struct format - A struct for managing printf format specifiers.
 * @ph: Pointer to the format specifier string.
 * @function: Corresponding function to handle the conversion.
 */


typedef struct format
{
    char *ph;
    int (*function)();
} convert;

int prntPNTR(va_list args);
int prntROT13(va_list args);
int prntPrcnt(void);
int prntREVRS(va_list args);
int prnthexa_uppr_min(unsigned long int numr);
int prntHEXA_uppr(unsigned int numr);
int prntSTRS(va_list args);
int prntHEXAmin(va_list args);
int prntHEXA(va_list args);
int prntOCT(va_list args);
int prntUNSGN(va_list args);
int prntBIN(va_list args);
int prntI(va_list args);
int prntD(va_list args);
int _strlenc(const char *s);
int _strlen(char *s);
int prntC(va_list args);
int prntStr(va_list args);
int _putchar(char c);
int _printf(const char *format, ...);

#endif
