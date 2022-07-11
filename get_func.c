#include "main.h"
#include <stdlib.h>

/**
 * get_func - returns the correct func or null
 * @id: char
 * Return: function
 */

int (*get_func(const char id))(va_list args)
{
	prv_t prv[] = {
		{'c', pr_char},
		{'s', pr_str},
		{'b', pr_bin},
		{'d', pr_dec},
		{'i', pr_dec},
		{'u', pr_un_int},
		{'o', pr_octa},
		{'x', pr_hex},
		{'X', pr_heX},
		{'S', pr_non_prt},
		{'r', pr_rev},
		{'R', pr_rot13},
		{'p', pr_ptr}
	};

	const int PRV_LEN = 13;
	int i = 0;

	while (i < PRV_LEN)
	{
		if (id == prv[i].id)
			return (prv[i].f);
		i++;
	}

	return (NULL);
}
