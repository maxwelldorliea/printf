#include "main.h"


/**
 * pr_heX - prints the hexidecimal representation of a number
 * @args: va_list
 * Return: int
 */

int pr_heX(va_list args)
{
	int cnt = 0;
	unsigned int num = va_arg(args, unsigned int);

	return (cnvrt_to_heX(num, &cnt));
}

/**
 * cnvrt_to_heX - convert decimal to hexidecimal
 * @n: unsigned int
 * @ptr: int pointer
 * Return: int
 */

int cnvrt_to_heX(unsigned int n, int *ptr)
{
	char rep[] = "0123456789ABCDEF";

	if (n / 16)
		cnvrt_to_heX(n / 16, ptr);

	*ptr += _putchar(rep[n % 16]);
	return (*ptr);
}
