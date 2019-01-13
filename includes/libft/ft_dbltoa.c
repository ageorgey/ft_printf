#include "libftprintf.h"

char			*ft_dbltoa(double nb)
{
	char		*str;
	size_t		i;

	str = ft_strnew(ft_dbllen(nb));
	i = 0;
	return (str);
}

int			main()
{
	double	nb;

	nb = -93.27;
	ft_putnbr(ft_dbllen(nb));
}
