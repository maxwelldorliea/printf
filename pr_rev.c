#include "main.h"


/**
 * pr_rev - prints the reverse version of a string
 * @args: va_list
 * Return: int
 */


int pr_rev(va_list args)
{
	int cnt = 0, s_len;
	char *s = va_arg(args, char *);

	if (s == NULL)
		s = "(null)";
	s_len = get_str_len(s) - 1;

	while (s_len >= 0)
	{
		cnt += _putchar(s[s_len]);
		s_len--;
	}

	return (cnt);
}


/**
 * get_str_len - helper func for get length of a string
 * @s: char pointer
 * Return: int
 */

int get_str_len(char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}
	return (len);
}
