#include "main.h"

/**
 * print_char - print char
 * @our_list: argument
 *
 * Return: 0 if successful
 */
int print_char(va_list our_list)
{
	char c = va_arg(our_list, int);

	_putchar(c);
	return (1);
}

/**
 * print_percent - print percentage
 * @our_list: argument
 *
 * Return: 0 if successful
 */
int print_percent(va_list our_list __attribute__((unused)))
{
	_putchar('%');
	return (1);
}

/**
 * print_str - print string
 * @our_list: argument
 *
 * Return: a - 1 the number of characters in string.
 */
int print_str(va_list our_list)
{
	int a = 0;
	char *s = va_arg(our_list, char *);

	if (!s)
		s = "(null)";

	while (s[a] != '\0')
	{
		_putchar(s[a]);
		a++;
	}

	return (a);
}

