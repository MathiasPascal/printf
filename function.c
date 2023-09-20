#include "main.h"

/**
 * get_print - selects the right printing function
 * depending on the conversion specifier passed to _printf
 * @s: character that holds the conversion specifier
 * arr[] to find a match between the specifier passed to _printf
 * Return: a pointer to the matching printing function
 */
int (*function(char s))(va_list, print *)
{
	bizzy arr[] = {
		{'i', print_int},
		{'s', print_string},
		{'c', print_char},
		{'d', print_int},
		{'%', print_percent}
		};
	int flags = 5;

	register int i;

	for (i = 0; i < flags; i++)
		if (arr[i].c == s)
			return (arr[i].ptr);
	return (NULL);
}
