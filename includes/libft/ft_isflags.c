#include "libftprintf.h"

int				ft_isflags(int c)
{
	char		*flags;
	size_t		i;

	flags = ft_strdup("#0 +-");
	i = 0;
	while (flags[i])
	{
		if (flags[i] == c)
			return (1);
		i++;
	}
	return (0);
}
