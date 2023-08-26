#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#define BUFFER_SIZE 1024
int _putchar(char c, int *size);
int buffer(char c, int *size);
int _printf(const char *format, ...);
void printInteger(int number, int *size);
void printStr(char *str, int *size);
void handleFormat(char format, void *arguement, int *size);
void printBinary(unsigned int number, int *size);
#endif /* MAIN_H */
