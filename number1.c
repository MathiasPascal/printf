#include "main.h"

/**
 * print_bigS - Non printable characters
 * (0 < ASCII value < 32 or >= 127)
 * @l: va_list arguments from _printf
 * @ptr: pointer to the struct flags
 * Return: number of char printed
 */
int print_bigS(va_list l, print *ptr)
{
	int i, count = 0;
	char *resi;
	char *s = va_arg(l, char *);

	(void)ptr;
	if (!s)
		return (_puts("(null)"));

	for (i = 0; s[i]; i++)
	{
		if (s[i] > 0 && (s[i] < 32 || s[i] >= 127))
		{
			_puts("\\x");
			count += 2;
			resi = convert(s[i], 16, 0);
			if (!resi[1])
				count += _putchar('0');
			count += _puts(resi);
		}
		else
			count += _putchar(s[i]);
	}
	return (count);
}

/**
 * print_rev - prints a string in reverse
 * @l: argument from _printf
 * @f: pointer to the struct flags that determines
 * if a flag is passed to _printf
 * Return: length of the printed string
 */
int print_rev(va_list l, print *ptr)
{
	int i = 0, j;
	char *s = va_arg(l, char *);

	(void)ptr;
	if (!s)
		s = "(null)";

	while (s[i])
		i++;

	for (j = i - 1; j >= 0; j--)
		_putchar(s[j]);

	return (i);
}

/**
 * print_rot13 - prints a string using rot13
 * @l: list of arguments from _printf
 * @ptr: pointer to the struct flags
 * Return: length of the printed string
 */
int print_rot13(va_list l, print *ptr)
{
	int i, j;
	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *s = va_arg(l, char *);

	(void)ptr;
	for (j = 0; s[j]; j++)
	{
		if (s[j] < 'A' || (s[j] > 'Z' && s[j] < 'a') || s[j] > 'z')
			_putchar(s[j]);
		else
		{
			for (i = 0; i <= 52; i++)
			{
				if (s[j] == rot13[i])
					_putchar(ROT13[i]);
			}
		}
	}

	return (j);
}
