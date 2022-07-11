#include "main.h"


/**
 * pr_ptr - prints the memory address of a variable
 * @args: va_list
 * Return: int
 */

int pr_ptr(va_list args)
{
	int cnt = 0;
	unsigned long int addr = (unsigned long int)va_arg(args, void *);

	if (addr == 0)
	{
		char *s = "(null)";

		while (*s)
		{
			cnt += _putchar(*s);
			s++;
		}

		return (cnt);
	}

	return (cnvrt_to_hex(addr, &cnt));
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
