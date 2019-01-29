#include "libftprintf.h"

char			*ft_longtoa_base(long nbr, size_t base)
{
	char		*str;
	size_t		i;

	i = ft_longlen(nbr, base);
	str = ft_strnew(i);
	if (nbr == 0)
		str[0] = '0';
	if (nbr < LONG_MIN || nbr > LONG_MAX || base == 0)
		return ("Nombre non géré ou base nulle !\n");
	if (base == 10)
		return (ft_itoa(nbr));
	if (base > 10)
		return (ft_base_supp(str, nbr, base, i));
	if (base < 10)
	{
		while (nbr)
		{
			str[--i] = nbr % base + '0';
			nbr = nbr / base;
		}
	}
	return (str);
}
