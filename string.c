#include "main.h"
/**
 * print_char - returns char as string
 * @our_list: format
 * Return: String verion of char
 */
char *print_char(va_list our_list)
{
	char *k;
	char c;

	c = va_arg(our_list, int);

	if (c == 0)
		c = '\0';

	s = malloc(sizeof(char) * 2);
	if (s == NULL)
		return (NULL);
	k[0] = c;
	k[1] = '\0';

	return (k);
}
