#include "holberton.h"
/**
 * print_str - takes string and return string
 * @our_list: string
 * Return: string
 */
char *print_str(va_list our_list)
{
	char *s;
	char *p;
	int len;

	s = va_arg(our_list, char *);
	if (s == NULL)
		s = "(null)";

	len = _strlen(s);

	p = malloc(sizeof(char) * len + 1);
	if (p == NULL)
		return (NULL);

	return (_strcpy(p, s));
}
