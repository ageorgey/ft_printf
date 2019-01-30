#include "../includes/libft/libftprintf.h"
#include "../includes/ft_printf.h"

s_format			*convert_deca(s_format *sf, va_list ap)
{
	sf->str = ft_itoa(va_arg(ap, int));
	return (sf);
}

s_format			*convert_octa(s_format *sf, va_list ap)
{
	sf->str = ft_itoa_base(va_arg(ap, int), 8);
	return (sf);
}

s_format			*convert_hexa(s_format *sf, va_list ap)
{
	size_t			i;

	i = 0;
	sf->str = ft_itoa_base(va_arg(ap, int), 16);
	if (sf->type[0] == 'X')
		sf->str = ft_strupper(sf->str);
	return (sf);
}

s_format			*convert_bin(s_format *sf, va_list ap)
{
	sf->str = ft_itoa_base(va_arg(ap, int), 2);
	return (sf);
}

s_format			*convert_diouxXb(s_format *sf, va_list ap)
{
	if (sf->type[0] == 'd' || sf->type[0] == 'i' || sf->type[0] == 'u')
		convert_deca(sf, ap);
	else if (sf->type[0] == 'o')
		convert_octa(sf, ap);
	else if (sf->type[0] == 'x' || sf->type[0] == 'X')
			convert_hexa(sf, ap);
	else if (sf->type[0] == 'b')
		convert_bin(sf, ap);
	return (sf);
}
