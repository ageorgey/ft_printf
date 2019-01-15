#include "libftprintf.h"

char			*ft_llongtoa(long long nbr)
{
	char		*str;
	size_t		i;

	i = ft_llonglen(nbr, 10);
	str = ft_strnew(i);
	if (nbr < LLONG_MIN || nbr > LLONG_MAX)
		return ("Nombre non géré !\n");
	if (nbr == 0)
		str[i--] = '0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	while (nbr)
	{
		str[--i] = nbr % 10 + '0';
		nbr = nbr / 10;
	}
	return (str);
}
