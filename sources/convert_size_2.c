#include "../includes/libft/libftprintf.h"
#include "../includes/ft_printf.h"

s_format			*size_for_f(s_format *sf, va_list ap)
{
	if (ft_strequ("l", sf->size))
		sf->str = ft_dbltoa(va_arg(ap, double), ft_atoi(sf->precision));
	else if (ft_strequ("L", sf->size))
		sf->str = ft_ldbltoa(va_arg(ap, long double), ft_atoi(sf->precision));
	return (sf);
 }
