#include "../includes/libft/libftprintf.h"
#include "../includes/ft_printf.h"
#include <stdio.h>

int					ft_printf(const char *format, ...)
{
	va_list			ap;
	s_format		*sf;
	char			*fmt;
	size_t			i;

	i = 0;
	va_start(ap, format);
	fmt = (char*)format;
	sf = init_struct();
	ft_struntil(fmt, '%');
	parse_format(fmt, sf);
	gestion_all(sf, ap);
	fmt = next_format(fmt);
	ft_putstr(sf->str);
	ft_struntil(fmt, 0);
	va_end(ap);
	return (1);
}
