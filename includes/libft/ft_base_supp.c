#include "libftprintf.h"

char			*ft_base_supp(char *str, int nbr, size_t base, size_t i)
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