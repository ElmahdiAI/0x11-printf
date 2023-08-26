#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#define BUFFER_SIZE 1024
int _putchar(char c, int *size);
int buffer(char c, int *size);
int _printf(const char *format, ...);
void printInteger(int number, int *size);
void printStr(char *str, int *size);
void NonPrintableChar(char *str, int *size);
void printPointer(unsigned int unumber, int *size);
void handleFormat(char format, void *arguement, int *size);
void printBinary(unsigned int number, int *size);
void printOctal(unsigned int number, int *size);
void printHex(unsigned int number, int n, int *size);
void hexChar(unsigned int hex, int n, int *size);
#endif /* MAIN_H */
