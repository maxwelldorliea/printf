#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * _printf - produces output according to a format
 * @format: char pointer
 * Return: int
 */


int _printf(const char *format, ...)
{
	int i = 0, cnt = 0;
	int (*func)(va_list);
	va_list args;

	va_start(args, format);

	if (format == NULL && !format[i + 1])
		return (-1);
	while (format[i])
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			i++;
			cnt++;
			continue;
		}

		func = get_func(format[++i]);

		if ((func) != NULL)
		{
			cnt += func(args);
		}

		else
		{
			cnt += 2;
			_putchar(format[--i]);
			_putchar(format[++i]);
		}

		i++;
	}
	va_end(args);
	return (cnt);
}
