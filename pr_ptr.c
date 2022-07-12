#include "main.h"


/**
 * pr_ptr - prints the memory address of a variable
 * @args: va_list
 * Return: int
 */

int pr_ptr(va_list args)
{
	int cnt = 0;
	unsigned long int addr = va_arg(args, unsigned long int);

	if (addr == 0)
	{
		char *s = "(nil)";

		while (*s)
		{
			cnt += _putchar(*s);
			s++;
		}

		return (cnt);
	}

	cnt += _putchar('0');
	cnt += _putchar('x');

	return (cnvrt_to_mem_addr(addr, &cnt));
}

/**
 * cnvrt_to_mem_addr - convert decimal to hexidecimal
 * @n: unsigned long int
 * @ptr: int pointer
 * Return: int
 */

int cnvrt_to_mem_addr(unsigned long int n, int *ptr)
{
	char rep[] = "0123456789abcdef";

	if (n / 16)
		cnvrt_to_mem_addr(n / 16, ptr);
	*ptr += _putchar(rep[n % 16]);
	return (*ptr);
}
