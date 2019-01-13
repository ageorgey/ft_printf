#include "../includes/libft/libftprintf.h"
#include "../includes/ft_printf.h"
#include <stdint.h>

s_format			*convert_c(s_format *sf, va_list ap)
{
	sf->str = ft_strnew(1);
	sf->str[0] = va_arg(ap, int);
	return (sf);
}

s_format			*convert_s(s_format *sf, va_list ap)
{
	sf->str = ft_strdup(va_arg(ap, char *));
	return (sf);
}

s_format			*convert_p(s_format *sf, va_list ap)
{
	sf->str = ft_itoa_base(va_arg(ap, uintptr_t), 16);
	return (sf);
}

s_format			*convert_csp(s_format *sf, va_list ap)
{
	if (sf->type[0] == 'c')
		convert_c(sf, ap);
	else if (sf->type[0] == 's')
		convert_s(sf, ap);
	else if (sf->type[0] == 'p')
		convert_p(sf, ap);
	return (sf);
}
