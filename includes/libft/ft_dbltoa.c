#include "libftprintf.h"

char			*ft_dbltoa(double nb, size_t p)
{
	char		*str;
	char		*tenth;
	size_t		*i;
	size_t		j;

	j = 0;
	i = ft_dbllen(nb, p);
	str = ft_strnew(i[1] + p);
	tenth = ft_strnew(p);
	str = ft_itoa(i[1]);
	tenth = ft_filltenth(i[2], p);
	while (str[j])
		j++;
	if (p > 0)
	{
		str[j++] = '.';
		str = ft_strjoin(str, tenth);
	}
	return (str);
}
