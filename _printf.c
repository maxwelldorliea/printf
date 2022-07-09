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
	va_list args;

	va_start(args, format);

	if (format == NULL)
		return (cnt);
	while (format[i])
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			i++;
			cnt++;
			continue;
		}

		switch (format[++i])
		{
			case 'c':
				cnt++;
				pr_char(args);
				break;
			case 's':
				pr_str(args, &cnt);
				break;
			case '%':
				cnt++;
				_putchar(format[i]);
				break;
			default:
				cnt += 2;
				_putchar(format[--i]);
				_putchar(format[++i]);
		}

		i++;
	}
	va_end(args);
	return (cnt);
}
