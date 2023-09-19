#include "main.h"

/**
 * print_binary1 - converts to int
 * @our_list: argument to take in
 *
 * Return: return n = number of integers.
 */
int bc(va_list our_list)
{
	long int check = 1, i = 0;
	long int k = va_arg(our_list, int), w = k;
	int n = 0;

	if (k == 0)
	{
		_putchar('0');
		return (1);
	}

	while (w > 0)
	{
		i++;
		w = w >> 1;
	}

	check = check << (i - 1);

	for (; i > 0; i--)
	{
		if (k & check)
		{
			_putchar('1');
			n++;
		}
		else
		{
			_putchar('0');
			n++;
		}
		check = check >> 1;
	}
	return (n);
}
