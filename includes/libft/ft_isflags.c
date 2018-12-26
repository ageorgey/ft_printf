#include "libftprintf.h"

int				ft_isflags(int c)
{
	if (c == '#' || c == '0' || c == ' ' || c == '+' || c == '-')
		return (1);
	else
		return (0);
}
