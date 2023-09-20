#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

/**
 * struct character_print - print data
 * @c: character.
 * @func_ptr: function pointer
 */

typedef struct character_print
{
	char *count;
	int (*func_ptr)(va_list our_list);
} print;

/* function prototypes */
int _printf(const char *format, ...);
int _putchar(char c);
char *print_string(va_list our_list);
char *print_char(va_list our_list);
char *print_d(va_list our_list);
int _strlen(char *s);
char *_strcpy(char *desti, char *srcc);
char* (*get_func(char i))(va_list our_list);
char *_itos(int div, int length, int n)

#endif
