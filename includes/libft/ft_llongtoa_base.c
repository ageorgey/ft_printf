/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_llongtoa_base.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ageorgey <ageorgey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 16:12:05 by ageorgey          #+#    #+#             */
/*   Updated: 2019/02/26 16:12:08 by ageorgey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char			*base_supp(char *str, long long nbr, size_t base, size_t i)
{
	if (base > 26)
		return ("Bases suppérieure à 26 non gérées ! \n");
	while (nbr)
	{
		if (nbr % base >= 10)
		{
			str[--i] = nbr % base + 'W';
			nbr = nbr / base;
		}
		if (nbr % base < 10)
		{
			str[--i] = nbr % base + '0';
			nbr = nbr / base;
		}
	}
	return (str);
}

char			*ft_llongtoa_base(long long nbr, size_t base)
{
	char		*str;
	size_t		i;

	i = ft_llonglen(nbr, base);
	str = ft_strnew(i);
	if (nbr == 0)
		str[0] = '0';
	if (nbr < LLONG_MIN || nbr > LLONG_MAX || base == 0)
		return ("Nombre non géré ou base nulle !\n");
	if (base == 10)
		return (ft_itoa(nbr));
	if (base > 10)
		return (base_supp(str, nbr, base, i));
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
