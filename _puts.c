#include "main.h"
/**
 * _puts - prints a string to stdout
 * @c: pointer to the string to print
 * Return: number of chars written
 */
int _puts(char *c)
{
	register int i;

	for (i = 0; c[i] != '\0'; i++)
		_putchar(c[i]);
	return (i);
}
