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

	if (format == NULL)
		return (-1);
	while (format[i])
	{
		if (format[i] != '%')
		{
			cnt += _putchar(format[i]);
			i++;
			continue;
		}
		if (format[i + 1] == '%')
		{
			cnt += _putchar(format[++i]);
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
			if (format[i] == '\0')
				return (-1);
			cnt += _putchar(format[i - 1]);
			cnt += _putchar(format[i]);
		}
		i++;
	}
	va_end(args);
	return (cnt);
}
