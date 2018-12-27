#include "libftprintf.h"

int				ft_issize(int c)
{
	if (c == 'h' || c == 'l' || c == 'L')
		return (1);
	return (0);
}
