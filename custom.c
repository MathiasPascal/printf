#include "main.h"
/**
 * print_percent - prints a percent
 * @l: va_list arguments from _printf
 * @ptr: pointer to the struct flags in which we turn the flags on
 * Return: number of char printed
 */
int print_percent(va_list l, print *ptr)
{
	(void)l;
	(void)ptr;
	return (_putchar('%'));
}
