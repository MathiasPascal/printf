#include "main.h"
/**
 * _printf - printing function to std output
 * @format: string pointer
 * Return: Always 0
 */
int _printf(const char *format, ...)
{
	int i, j, length = 0;
	va_list our_list;

	print list[] = {
		{"c", print_char}, {"s", print_str}, {"%", print_percent}, {"d", print_int}, {"u", print_unsigned}, {"i", print_int}, {"b", bc}, {"S", print_str}
	};
	va_start(our_list, format);
	if (!format)
		return (-1);
	while (*format)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			length++;
		}
		else
		{
			if (!format[i + 1] || format[i + 1] == ' ')
				return (-1);
			for (j = 0; j < 6; j++)
			{
				if (format[i + 1] == *(list[j].count))
					break;
			}
			if (j < 6)
			{
				length = length + list[j].func_ptr(our_list);
				i++;
			}
			else
			{
				_putchar(format[i]);
				length++;
			}
		}
	}
	va_end(our_list);
	return (length);
}
