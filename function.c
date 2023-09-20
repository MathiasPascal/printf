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
		{'%', print_percent},
		{'u', print_unsigned},
		{'x', print_hex},
		{'X', print_hex_big},
		{'b', print_binary},
		{'o', print_octal},
		{'R', print_rot13},
		{'r', print_rev},
		{'S', print_bigS},
		{'p', print_address}
		};
	int flags = 14;

	register int i;

	for (i = 0; i < flags; i++)
		if (arr[i].c == s)
			return (arr[i].ptr);
	return (NULL);
}
