#include "main.h"

/**
 * pr_char - prints a char
 * @args: va_list
 * Return: int
 */

int pr_char(va_list args)
{
	return (_putchar(va_arg(args, int)));
}
