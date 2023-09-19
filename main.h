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
int print_char(va_list our_list);
int print_str(va_list our_list);
int print_percent(va_list our_list __attribute((unused)));
int _putchar(char c);
int print_int(va_list our_list);
int prit_digit(va_list our_list);
int print_binary1(va_list our_list);
int print_binary2(va_list our_list);
int print_unsigned(va_list our_list);
int print_dig(long int k, long int n);
int print_digit_u(long int k, long int n);
int print_binary(long int k, long int n);
#endif
