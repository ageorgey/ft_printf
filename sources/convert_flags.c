#include "../includes/libft/libftprintf.h"
#include "../includes/ft_printf.h"

s_format			*flag_sharp_for_oxX(s_format *sf)
{
	char			*str;

	if (ft_strequ(sf->type, "o") && !ft_strequ(sf->str, "0"))
	{
		str = ft_strnew(1);
		str = ft_strcpy(str, "0");
		sf->str = ft_strjoin(str, sf->str);
	}
	else if (ft_strequ(sf->type, "x"))
	{
		str = ft_strnew(2);
		str = ft_strcpy(str, "0x");
		sf->str = ft_strjoin(str, sf->str);
	}
	else if (ft_strequ(sf->type, "X"))
	{
		str = ft_strnew(2);
		str = ft_strcpy(str, "0X");
		sf->str = ft_strjoin(str, sf->str);
	}
	return (sf);
}

s_format			*flag_sharp_for_f(s_format *sf)
{
	char			*str;
	size_t			i;

	i = 0;
	if (!ft_strchr(sf->str, '.'))
	{
		str = ft_strnew(1);
		str = ft_strcpy(str, ".");
		sf->str = ft_strjoin(sf->str, str);
	}
	return (sf);
}

s_format			*flag_zero(s_format *sf)
{
	char			*str;
	int				i;

	i = ft_atoi(sf->width) - ft_strlen(sf->str);
	if (i <= 0)
		return (sf);
	if (ft_strchr(sf->flags, '-') || (sf->precision && (sf->type[0] == 'd'
	|| sf->type[0] == 'i' || sf->type[0] == 'o' || sf->type[0] ==  'u'
	|| sf->type[0] ==  'x' || sf->type[0] ==  'X')))
		return (sf);
	else if (sf->type[0] == 'd' || sf->type[0] == 'i' || sf->type[0] ==  'o'
	|| sf->type[0] == 'u' || sf->type[0] == 'x' || sf->type[0] == 'X'
	|| sf->type[0] == 'b')
		{
			str = ft_fillzero(i);
			ft_strjoin(str, sf->str);
		}
	return (sf);
}

s_format			*flag_negative(s_format *sf)
{
	char			*str;
	int				*i;

	i = NULL;
	i[0] = 0;
	i[1] = ft_atoi(sf->width) - ft_strlen(sf->str);
	if (i[1] <= 0)
		return (sf);
	str = ft_strnew(i[1]);
	while (i[0] < i[1])
		str[i[0]++] = ' ';
	sf->str = ft_strjoin(sf->str, str);
	return (sf);
}

s_format			*flag_positive(s_format *sf)
{
	char			*str;

	if (sf->type[0] == 'd' || sf->type[0] == 'i' || sf->type[0] == 'f')
	{
		str = ft_strnew(1);
		str[0] = '+';
		if (!ft_strchr(sf->str, '-') || ft_strchr(sf->flags, ' '))
			return (sf);
		else
			sf->str = ft_strjoin(str, sf->str);
	}
	return (sf);
}
