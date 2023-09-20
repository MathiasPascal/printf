#include "main.h"
/**
 * _printf - produces output according to a format
 * @format: string
 * Return: length of string
 */
int _printf(const char *format, ...)
{
	int (*prfunc)(va_list, print *);
	const char *pt;
	va_list our_list;
	print flags = {0, 0, 0};

	register int count = 0;

	va_start(our_list, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (pt = format; *pt; pt++)
	{
		if (*pt == '%')
		{
			pt++;
			if (*pt == '%')
			{
				count += _putchar('%');
				continue;
			}
			while (get_flags(*pt, &flags))
				pt++;
			prfunc = function(*pt);
			count += (prfunc)
				? prfunc(our_list, &flags)
				: _printf("%%%c", *pt);
		} else
			count += _putchar(*pt);
	}
	_putchar(-1);
	va_end(our_list);
	return (count);

}
