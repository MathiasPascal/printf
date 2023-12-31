#include "main.h"

/**
 * print_address - prints address of input in hexa format
 * @l: va_list arguments from _printf
 * @ptr: pointer to the struct flags that determines
 * Return: number of char printed
 */
int print_address(va_list l, print *ptr)
{
	char *string;
	unsigned long int R = va_arg(l, unsigned long int);

	register int count = 0;

	(void)ptr;

	if (!R)
		return (_puts("(nil)"));
	string = convert(R, 16, 1);
	count += _puts("0x");
	count += _puts(string);
	return (count);
}
