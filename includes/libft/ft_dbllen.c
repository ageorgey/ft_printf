#include "libftprintf.h"

size_t			*ft_lententh(double nb)
{
	size_t		*i;
	int			n;
	int			n2;

	if(!(i = (size_t*)malloc(sizeof(size_t) * 3)))
		return (NULL);
	i[0] = 0;
	n = nb;
	n2 = nb;
	while (nb - n > .0)
	{
		nb *= 10;
		n = nb;
		++i[0];
	}
	i[1] = n - (n2 * ft_power(10, i[0]));
	return (i);
}

size_t			ft_lendecimal(double nb)
{
	size_t		i;
	int			n;

	n = nb;
	i = 0;
	while (n)
	{
		n = n / 10;
		++i;
	}
	return (i);
}

size_t			*ft_dbllen(double nb)
{
	size_t		*i;
	size_t		*tenth;
	int			n;

	n = nb;
	if(!(i = (size_t*)malloc(sizeof(size_t) * 4)))
		return (NULL);
	i[0] = 1;
	if (nb < 0)
		nb *= -(++i[0]);
	tenth = ft_lententh(nb);
	i[0] += ft_lendecimal(nb) + tenth[0];
	i[1] = n;
	i[2] = tenth[1];
	i[3] = 0;
	return (i);
}
