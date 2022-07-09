#include "main.h"
#include <string.h>

/**
 * pr_str - prints a string
 * @args: va_list
 * @cnt: int pointer
 * Return: int
 */


int pr_str(va_list args, int *cnt)
{
	char *s = va_arg(args, char *);
	*cnt += strlen(s);

	while (*s)
	{
		_putchar(*s);
		s++;
	}


	return (*cnt);
}
