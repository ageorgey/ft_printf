#include "../includes/libft/libftprintf.h"
#include "../includes/ft_printf.h"

s_format			*precision_for_diouxXb(s_format *sf)
{
	size_t			i;
	int				j;
	char			*str;

	i = ft_strlen(sf->str);
	j = ft_atoi(sf->precision) - i;
	if (j > 0)
	{
		str = ft_strnew(j);
		str = ft_fillzero(j);
		sf->str = ft_strjoin(str, sf->str);
	}
	return (sf);
}

s_format			*precision_for_f(s_format *sf)
{
	if (!sf->precision[0])
		sf->precision = "6";
	return (sf);
}

s_format			*precision_for_s(s_format *sf)
{
	char			*str;

	str = ft_strnew(ft_atoi(sf->precision));
	sf->str = ft_strncpy(str, sf->str, ft_atoi(sf->precision));
	return (sf);
}
