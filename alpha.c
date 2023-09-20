#include "main.h"

/**
 * print_string - loops through a string and prints
 * every character
 * @l: va_list arguments from _printf
 * @ptr: pointer to the struct flags that determines
 * if a flag is passed to _printf
 * Return: number of char printed
 */
int print_string(va_list l, print *ptr)
{
	char *s = va_arg(l, char *);

	(void)ptr;

	if (!s)
		s = "(null)";
	return (_puts(s));
}

/**
 * print_char - prints a character
 * @l: va_list arguments from _printf
 * @ptr: pointer to the struct flags that determines
 * if a flag is passed to _printf
 * Return: number of char printed
 */
int print_char(va_list l, print *ptr)
{
	(void)ptr;
	_putchar(va_arg(l, int));
	return (1);
}
