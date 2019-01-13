#include "libftprintf.h"

size_t			ft_dbllen(double nb)
{
	int			n;
	int			nb2;
	size_t		i;

	i = 0;
	if (nb < 0)
		nb *= -(++i);
	n = nb;
	nb2 = nb;
	while (nb - n != .0 && nb - n > .0)
	{
		nb = nb * 10;
		n = nb;
		++i;
	}
	while (nb2)
	{
		nb2 = nb2 / 10;
		++i;
	}
	return (++i);
}
