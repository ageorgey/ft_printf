#include "../includes/libft/libftprintf.h"
#include "../includes/ft_printf.h"

s_format			*convert_f(s_format *sf, va_list ap)
{
	double			nb;

	nb = va_arg(ap, double);
	sf->str = ft_dbltoa(nb);
	return (sf);
}
