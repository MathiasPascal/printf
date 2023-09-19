#include "main.h"
/**
 * _printf - printing function to std output
 * @format: string pointer
 * Return: Always 0
 */
int _printf(const char *format, ...)
{
	int length = 0, i, j;
	va_list our_list;

	print list[] = {
		{"c", print_char}, {"s", print_str}, {"%", print_percent}, {"d", print_int}, {"u", print_unsigned}, {"i", print_int}, {"b", print_binary1}, {"S", print_str}
	};
	va_start(our_list, format);
	if (!format)
		return (-1);
	while (*format)
	{
		if (format[i] != '%')
		{
			write(1, format, 1);
			length++;
		}
		else
		{
			if (!format[i + 1] || format[i + 1] == ' ')
				return (-1);
			for (j = 0; j < 8; j++)
			{
				if (format[i + 1] == *(list[j].count))
					break;
			}
			if (j < 8)
			{
				length = length + list[j].func_ptr(our_list);
				i++;
			}
			else
			{
				write(1, format, 1);
				length++;
			}
		}
	}
	va_end(our_list);
	return (length);
}
