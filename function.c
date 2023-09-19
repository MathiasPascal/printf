#include "main.h"
/**
 * _itos - makes an int a string
 * @div: multiple of 10
 * @length: length of number
 * @n: number to convert to string
 * Return: string
 **/
char *_itos(int div, int length, int n)
{
	char *str;
	int i = 0;

	str = malloc(sizeof(char) * length + 2);
	if (str == NULL)
		return (NULL);

	if (n < 0)
	{
		str[0] = '-';
		i++;
	}
	while (n < 0)
	{
		str[i] = ((n / div) * -1 + '0');
		n = n % div;
		div /= 10;
		i++;
	}
	while (div >= 1)
	{
		str[i] = ((n / div) + '0');
		n = n % div;
		div /= 10;
		i++;
	}
	str[i] = '\0';
	return (str);
}

/**
 * print_d - gets length to put in _itos
 * @list: takes arg
 * Return: integar string
 **/
char *print_int(va_list our_list)
{
	int length, div, n, temp;

	n = va_arg(our_list, int);
	temp = n;
	length = 0;
	div = 1;

	if (n == 0)
	{
		length++;
		return (_itos(div, length, n));
	}

	while (temp != 0)
	{
		length += 1;
		if (length > 1)
			div *= 10;
		temp /= 10;
	}

	return (_itos(div, length, n));
}