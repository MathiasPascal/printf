#include "main.h"
/**
 * _printf - printing function to std output
 * @format: string pointer
 * Return: Always 0
 */
int _printf(const char *format, ...)
{
	int length = 0;
	va_list our_list;

	if (format == NULL)
		return (-1);
	va_start(our_list, format);
	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			length++;
		}
		else
		{
			format++;
			if (*format == '\0')
				break;
			if (*format == '%')
			{
				write(1, format, 1);
				length++;
			}
			else if (*format == 'c')
			{
				char count = va_arg(our_list, int);

				write(1, &count, 1);
				length++;
			}
			else if (*format == 's')
			{
				char *_str = va_arg(our_list, char*);

				write(1, _str, _strlen(_str));
				length += _str_len;
			}
		}
		format++;
	}
	va_end(our_list);
	return (length);
}
