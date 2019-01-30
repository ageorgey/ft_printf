#include "../includes/libft/libftprintf.h"
#include "../includes/ft_printf.h"

s_format			*convert_f(s_format *sf, va_list ap)
{
	if (!ft_isdigit(sf->precision[0]))
		sf->str = ft_dbltoa(va_arg(ap, double), 0);
	else
		sf->str = ft_dbltoa(va_arg(ap, double), ft_atoi(sf->precision));
	return (sf);
}
