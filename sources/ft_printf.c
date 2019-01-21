#include "../includes/libft/libftprintf.h"
#include "../includes/ft_printf.h"

int					ft_printf(const char *format, ...)
{
	va_list			ap;
	s_format		*sf;
	char			*fmt;

	va_start(ap, format);
	fmt = (char*)format;
	while (*fmt)
	{
		sf = init_struct();
		ft_struntil(fmt, '%');
		sf = parse_format(fmt, sf);
		ft_putendl(sf->str);
		fmt = next_format(fmt);
	}
	va_end(ap);
	return (1);
}
