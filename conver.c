#include "main.h"

/**
 * convert - converts number and base into string
 * @num: input number
 * @base: input base
 * @lowercase: flag if hexa values need to be lowercase
 * Return: result string
 */
char *convert(unsigned long int num, int base, int lowercase)
{
	static char *repo;
	static char buff[50];
	char *ptr;

	repo = (lowercase)
		? "0123456789abcdef"
		: "0123456789ABCDEF";
	ptr = &buff[49];
	*ptr = '\0';
	do {
		*--ptr = repo[num % base];
		num /= base;
	} while (num != 0);

	return (ptr);
}
