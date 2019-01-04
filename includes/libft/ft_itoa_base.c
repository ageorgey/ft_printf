#include "libftprintf.h"

char			*base_supp(char *str, int nbr, size_t base, size_t i)
{
	if (base > 26)
		return ("Bases suppérieure à 26 non gérées ! \n");
	while (nbr)
	{
		if (nbr % base >= 10)
		{
			str[--i] = nbr % base + 'W';
			nbr = nbr / base;
		}
		if (nbr % base < 10)
		{
			str[--i] = nbr % base + '0';
			nbr = nbr / base;
		}
	}
	return (str);
}

char			*ft_itoa_base(int nbr, size_t base)
{
	char		*str;
	size_t		i;

	i = ft_intlen(nbr, base);
	str = ft_strnew(i);
	if (nbr == 0)
		str[0] = '0';
	if (nbr < -2147483648 || nbr > 2147483647 || base == 0)
		return ("Nombre non géré ou base nulle !\n");
	if (base == 10)
		return (ft_itoa(nbr));
	if (base > 10)
		return (base_supp(str, nbr, base, i));
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
