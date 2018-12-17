#include "libft.h"

void			ft_struntil(const char *str, int c)
{
	if (!str)
		return ;
	if (*str != c)
	{
		ft_putchar(*str);
		ft_struntil(str + 1, c);
	}
}
