#include "libftprintf.h"

int				ft_iswidth(int c)
{
	if (ft_isalnum(c))
		return (1);
	else
		return (0);
}
