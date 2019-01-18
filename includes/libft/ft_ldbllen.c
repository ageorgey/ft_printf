#include "libftprintf.h"

size_t			*ft_lententh(long double nb, size_t p)
{
	size_t		*i;
	long			n;
	long			n2;

	if(!(i = (size_t*)malloc(sizeof(size_t) * 3)))
		return (NULL);
	i[0] = 0;
	n = nb;
	n2 = nb;
	while (p--)
	{
		nb *= 10;
		n = (float)nb;
		++i[0];
	}
	i[1] = n - (n2 * ft_power(10, i[0]));
	return (i);
}

size_t			ft_lendecimal(long double nb)
{
	size_t		i;
	long		n;

	n = nb;
	i = 0;
	while (n)
	{
		n = n / 10;
		++i;
	}
	return (i);
}

size_t			*ft_ldbllen(long double nb, size_t p)
{
	size_t		*i;
	size_t		*tenth;
	long		n;

	n = nb;
	if(!(i = (size_t*)malloc(sizeof(size_t) * 4)))
		return (NULL);
	i[0] = 1;
	if (nb < 0)
		nb *= -(++i[0]);
	tenth = ft_lententh(nb, p);
	i[0] += ft_lendecimal(nb) + tenth[0];
	i[1] = n;
	i[2] = tenth[1];
	i[3] = 0;
	return (i);
}
