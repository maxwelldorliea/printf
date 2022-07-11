#include "main.h"


/**
 * pr_hex - prints the hexidecimal representation of a number
 * @args: va_list
 * Return: int
 */

int pr_hex(va_list args)
{
	int cnt = 0;
	int *ptr = &cnt;
	unsigned int num = va_arg(args, unsigned int);

	return (cnvrt_to_hex(num, ptr));
}

/**
 * cnvrt_to_hex - convert decimal to hexidecimal
 * @n: unsigned int
 * @ptr: int pointer
 * Return: int
 */

int cnvrt_to_hex(unsigned int n, int *ptr)
{
	char rep[] = "0123456789abcdef";

	if (n / 16)
		cnvrt_to_hex(n / 16, ptr);
	*ptr += _putchar(rep[n % 16]);
	return (*ptr);
}
