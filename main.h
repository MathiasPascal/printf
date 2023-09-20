#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
/**
 * struct flags - print flags
 * @add: +
 * @space_bar: for space
 * @hash_tag: #
 */

typedef struct flags
{
	int add;
	int space_bar;
	int hash_tag;
} print;

/**
 * struct character_print - print data
 * @c: character.
 * @ptr: function pointer
 *
 */

typedef struct printing
{
	char c;
	int (*ptr)(va_list our_list, print *ptr);
} bizzy;

/* function prototypes */
int _printf(const char *format, ...);
int _putchar(char c);
int _puts(char *c);
void print_number(int n);
int count_digit(int i);
int get_flags(char s, print *ptr);
int (*function(char s))(va_list, print *);
int print_int(va_list l, print *ptr);
int print_string(va_list l, print *ptr);
int print_char(va_list l, print *ptr);
int print_address(va_list l, print *ptr);
int print_unsigned(va_list l, print *ptr);
int print_percent(va_list l, print *ptr);


int print_unsigned(va_list l, print *ptr);
int print_hex(va_list l, print *ptr);
int print_hex_big(va_list l, print *ptr);
int print_binary(va_list l, print *ptr);
int print_octal(va_list l, print *ptr);


char *convert(unsigned long int num, int base, int lowercase);
int print_address(va_list l, print *ptr);
int print_rot13(va_list l, print *ptr);
int print_rev(va_list l, print *ptr);
int print_bigS(va_list l, print *ptr);
#endif
