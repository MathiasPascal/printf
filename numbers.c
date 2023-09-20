#include "main.h"
/**
 * print_number - helper function that loops through
 * an integer and prints all its digits
 * @n: integer to be printed
 */
void print_number(int n)
{
	unsigned int x;

	if (n < 0)
	{
		_putchar('-');
		x = -n;
	}
	else
		x = n;

	if (x / 10)
		print_number(x / 10);
	_putchar((x % 10) + '0');
}
/**
 * count_digit - returns the number of digits in an integer
 * for _printf
 * @i: integer to evaluate
 * Return: number of digits
 */
int count_digit(int i)
{
	unsigned int z = 0;
	unsigned int u;

	if (i < 0)
		u = i * -1;
	else
		u = i;
	while (u != 0)
	{
		u /= 10;
		z++;
	}
	return (z);
}

/**
 * print_int - prints an integer
 * @l: va_list of arguments from _printf
 * @ptr: pointer to the struct flags determining
 * if a flag is passed to _printf
 * Return: number of char printed
 */
int print_int(va_list l, print *ptr)
{
	int n = va_arg(l, int);
	int resi = count_digit(n);

	if (ptr->space_bar == 1 && ptr->add == 0 && n >= 0)
		resi += _putchar(' ');
	if (ptr->add == 1 && n >= 0)
		resi += _putchar('+');
	if (n <= 0)
		resi++;
	print_number(n);
	return (resi);
}
/**
 * print_unsigned - prints an unsigned integer
 * @l: va_list of arguments from _printf
 * @ptr: pointer to the struct flags
 * Return: number of char printed
 */

int print_unsigned(va_list l, print *ptr)
{
	unsigned int u = va_arg(l, unsigned int);
	char *str = convert(u, 10, 0);

	(void)ptr;
	return (_puts(str));
}
