#include "libftprintf.h"

int				ft_issize(int c)
{
	char		*size;

	size = "hlL";
	while (*size)
	{
		if (*size == c)
			return (1);
		size++;
	}
	return (0);
}
