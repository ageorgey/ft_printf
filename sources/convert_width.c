#include "../includes/libft/libftprintf.h"
#include "../includes/ft_printf.h"

s_format			*width_for_all(s_format *sf)
{
	size_t			*i;
	char			*str;

	i = NULL;
	i[0] = ft_atoi(sf->width) - (int)ft_strlen(sf->str);
	i[1] = 0;
	str = ft_strnew(i[0]);
	if (ft_atoi(sf->width) <= (int)ft_strlen(sf->str))
		return (sf);
	else if (ft_strchr(sf->flags, '0'))
		flag_zero(sf);
	else if (ft_strchr(sf->flags, '-'))
		flag_negative(sf);
	else
	{
		while (i[1] < i[0])
			str[i[1]++] = ' ';
		sf->str = ft_strjoin(str, sf->str);
	}
	return (sf);
}
