#include "libftprintf.h"

int				ft_istype(int c)
{
	if (c == 'c' || c == 's' || c == 'p')
		return (1);
	return (0);
}
