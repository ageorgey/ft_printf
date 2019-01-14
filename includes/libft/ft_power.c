#include "libftprintf.h"

size_t			ft_power(size_t nbr, size_t power)
{
	size_t		n;

	n = nbr;
	while (--power)
		nbr *= n;
	return (nbr);
}
