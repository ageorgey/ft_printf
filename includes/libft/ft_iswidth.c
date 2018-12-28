#include "libftprintf.h"

int				ft_iswidth(char *str)
{
	if (ft_issize(*str) || ft_istype(*str) || *str == '.')
		return (0);
	while (*str && ft_isdigit(*str))
		str++;
	if (*str == '.' || ft_issize(*str) || ft_istype(*str))
		return (1);
	return (0);
}
