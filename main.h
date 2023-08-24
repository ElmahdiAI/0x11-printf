#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#define BUFFER_SIZE 1024
int _printf(const char *format, ...);
int _putchar(char c, int *size);
int buffer(char c, int *size);
void printChar(va_list args, int *flag, int *size);
void printInteger(va_list args, int *flag, int *size);
void printStr(va_list args, int *flag, int *size);
void NonPrintableChar(va_list args, int *flag, int *size);
void printPointer(va_list args, int *flag, int *size);
void printBinary(va_list args, int *flag, int *size);
void printUnsigned(va_list args, int *flag, int *size);
void printOctal(va_list args, int *flag, int *size);
void printHexUpper(va_list args, int *flag, int *size);
void printHexLower(va_list args, int *flag, int *size);
void hexChar(unsigned int hex, int *size, int isLower);
int handle_flag(char c);
typedef struct
{
	char specifier;
	void (*handler)(va_list args, int flag[2], int *size);
} ConversionHandler;
#endif /* MAIN_H */
