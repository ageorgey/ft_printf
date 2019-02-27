/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_llongtoa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ageorgey <ageorgey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 15:51:26 by ageorgey          #+#    #+#             */
/*   Updated: 2019/02/26 15:51:39 by ageorgey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char			*ft_llongtoa(long long nbr)
{
	char		*str;
	size_t		i;

	i = ft_llonglen(nbr, 10);
	str = ft_strnew(i);
	if (nbr < LLONG_MIN || nbr > LLONG_MAX)
		return ("Nombre non géré !\n");
	if (nbr == 0)
		str[i--] = '0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	while (nbr)
	{
		str[--i] = nbr % 10 + '0';
		nbr = nbr / 10;
	}
	return (str);
}
