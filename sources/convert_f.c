#include "../includes/libft/libftprintf.h"
#include "../includes/ft_printf.h"

s_format			*convert_f(s_format *sf, va_list ap)
{
	sf->str = ft_dbltoa(va_arg(ap, double), ft_atoi(sf->precision));
	return (sf);
}
