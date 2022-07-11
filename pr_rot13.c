#include "main.h"

/**
 * pr_rot13 - prints the encrypted rot13 version of a string
 * @args: va_list
 * Return: int
 */

int pr_rot13(va_list args)
{
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rapha[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *s = va_arg(args, char *);
	int i, cnt = 0;

	if (s == NULL)
		s = "(null)";

	while (*s)
	{
		for (i = 0; i < 52; i++)
		{
			if (*s == alpha[i])
			{
				cnt += _putchar(rapha[i]);
				break;
			}
		}

		if (!alpha[i])
			cnt += _putchar(*s);

		s++;
	}

	return (cnt);
}
