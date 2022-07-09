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

	while (format != NULL && format[i])
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			i++;
			cnt++;
			continue;
		}
		if (format[i + 1] != '%' && format[i + 1] != 's' && format[i + 1] != 'c')
		{
			_putchar(format[i]);
			_putchar(format[++i]);
			cnt += 2;
			i++;
			continue;
		}

		func = get_func(format[++i]);
		if ((func) != NULL)
		{
			cnt += func(args);
		}
		else
		{
			_putchar(format[i]);
			cnt++;
		}
		i++;
	}
	va_end(args);
	return (cnt);
}
