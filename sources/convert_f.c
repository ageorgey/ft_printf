#include "../includes/libft/libftprintf.h"
#include "../includes/ft_printf.h"

s_format			*convert_f(s_format *sf, va_list ap)
{
	double			nb;

	nb = va_arg(ap, double);
	if (ft_strequ(sf->size, "l"))
		sf->str = ft_dbltoa(nb, (size_t)ft_atoi(sf->precision));
	else if (ft_strequ(sf->size, "L"))
		sf->str = ft_ldbltoa(nb, (size_t)ft_atoi(sf->precision));
	return (sf);
}
