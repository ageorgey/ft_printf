#include "../includes/libft/libftprintf.h"
#include "../includes/ft_printf.h"

s_format			*size_for_di(s_format *sf, va_list ap)
{
	if (ft_strequ("hh", sf->size))
		sf->str = ft_itoa((signed char)va_arg(ap, int));
	else if (ft_strequ("h", sf->size))
		sf->str = ft_itoa((short)va_arg(ap, int));
	else if (ft_strequ("l", sf->size))
		sf->str = ft_longtoa(va_arg(ap, long));
	else if (ft_strequ("ll", sf->size))
		sf->str = ft_llongtoa(va_arg(ap, long long));
	return (sf);
}

s_format			*size_for_o(s_format *sf, va_list ap)
{
	if (ft_strequ("hh", sf->size))
		sf->str = ft_itoa_base((unsigned char)va_arg(ap, int), 8);
	else if (ft_strequ("h", sf->size))
		sf->str = ft_itoa_base((unsigned short)va_arg(ap, int), 8);
	else if (ft_strequ("l", sf->size))
		sf->str = ft_longtoa_base(va_arg(ap, unsigned long), 8);
	else if (ft_strequ("ll", sf->size))
		sf->str = ft_llongtoa_base(va_arg(ap, unsigned long long), 8);
	return (sf);
}

s_format			*size_for_u(s_format *sf, va_list ap)
{
	if (ft_strequ("hh", sf->size))
		sf->str = ft_itoa((unsigned char)va_arg(ap, int));
	else if (ft_strequ("h", sf->size))
		sf->str = ft_itoa((unsigned short)va_arg(ap, int));
	else if (ft_strequ("l", sf->size))
		sf->str = ft_longtoa(va_arg(ap, unsigned long));
	else if (ft_strequ("ll", sf->size))
		sf->str = ft_llongtoa(va_arg(ap, unsigned long long));
	return (sf);
}

s_format			*size_for_xX(s_format *sf, va_list ap)
{
	size_t			i;

	i = 0;
	if (ft_strequ("hh", sf->size))
		sf->str = ft_itoa_base((unsigned char)va_arg(ap, int), 16);
	else if (ft_strequ("h", sf->size))
		sf->str = ft_itoa_base((unsigned short)va_arg(ap, int), 16);
	else if (ft_strequ("l", sf->size))
		sf->str = ft_longtoa_base(va_arg(ap, unsigned long), 16);
	else if (ft_strequ("ll", sf->size))
		sf->str = ft_llongtoa_base(va_arg(ap, unsigned long long), 16);
	if (sf->type[0] == 'X')
		sf->str = ft_strupper(sf->str);
	return (sf);
}

s_format			*size_for_b(s_format *sf, va_list ap)
{
	if (ft_strequ("hh", sf->size))
		sf->str = ft_itoa_base((unsigned char)va_arg(ap, int), 2);
	else if (ft_strequ("h", sf->size))
		sf->str = ft_itoa_base((unsigned short)va_arg(ap, int), 2);
	else if (ft_strequ("l", sf->size))
		sf->str = ft_longtoa_base(va_arg(ap, unsigned long), 2);
	else if (ft_strequ("ll", sf->size))
		sf->str = ft_llongtoa_base(va_arg(ap, unsigned long long), 2);
	return (sf);
}