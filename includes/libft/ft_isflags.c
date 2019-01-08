#include "libftprintf.h"

int				ft_isflags(int c)
{
	char		*flags;

	flags = "#0 +-";
	while (*flags)
	{
		if (*flags == c)
			return (1);
		flags++;
	}
	return (0);
}
