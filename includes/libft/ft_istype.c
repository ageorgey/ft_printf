#include "libftprintf.h"

int				ft_istype(int c)
{
	if (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i' || c == 'o'
		|| c == 'u' || c == 'x' || c == 'X' || c == 'b')
		return (1);
	return (0);
}
