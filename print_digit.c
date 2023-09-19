#include "main.h"

/**
 * print_int - collects int value and calls function to print.
 * @our_list: argument value here int.
 *
 * Return: n length of int.
 */
int print_int(va_list our_list)
{
	long int k = va_arg(our_list, int);
	long int n;

	n = print_dig(k, 0);

	return (n);
}


/**
 * print_dig - prints signed integers.
 * @k: integer to be printed
 * @n: length of integer to be printed.
 *
 * Return: n length of int.
 */
int print_dig(long int k, long int n)
{
	if (k < 0)
	{
		_putchar('-');
		k = -k;
		n++;
	}
	if (k / 10)
	{
		n = print_dig(k / 10, n++);
	}
	_putchar(k % 10 + '0');
	n++;

	return (n);
}


/**
 * print_unsigned - collects int value and calls function to print.
 * @our_list: argument value here int.
 *
 * Return: n length of int.
 */
int print_unsigned(va_list our_list)
{
	long int k = va_arg(our_list, int);
	long int n;

	n = print_digit_u(k, 0);

	return (n);
}


/**
 * print_digit_u - prints unsigned integers.
 * @k: integer to be printed
 * @n: length of integer
 *
 * Return: n length of int.
 */
int print_digit_u(long int k, long int n)
{
	if (k < 0)
	{
		k = -k;
		n++;
	}

	if (k / 10)
	{
		n = print_digit_u(k / 10, n++);
	}
	_putchar(k % 10 + '0');
	n++;

	return (n);
}
