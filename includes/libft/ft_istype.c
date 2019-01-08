#include "libftprintf.h"

int				ft_istype(int c)
{
	char		*type;

	type = "diouxXbcsp";
	while (*type)
	{
		if (*type == c)
			return (1);
		type++;
	}
	return (0);
}
