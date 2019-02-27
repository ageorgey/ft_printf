/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_longtoa_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ageorgey <ageorgey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 16:16:58 by ageorgey          #+#    #+#             */
/*   Updated: 2019/02/26 16:17:00 by ageorgey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char			*ft_longtoa_base(long nbr, size_t base)
{
	char		*str;
	size_t		i;

	i = ft_longlen(nbr, base);
	str = ft_strnew(i);
	if (nbr == 0)
		str[0] = '0';
	if (nbr < LONG_MIN || nbr > LONG_MAX || base == 0)
		return ("Nombre non géré ou base nulle !\n");
	if (base == 10)
		return (ft_itoa(nbr));
	if (base > 10)
		return (ft_base_supp(str, nbr, base, i));
	if (base < 10)
	{
		while (nbr)
		{
			str[--i] = nbr % base + '0';
			nbr = nbr / base;
		}
	}
	return (str);
}
