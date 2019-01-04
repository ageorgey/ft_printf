/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ageorgey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/17 14:19:29 by ageorgey          #+#    #+#             */
/*   Updated: 2017/12/17 14:19:37 by ageorgey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char			*ft_itoa(int nbr)
{
	char		*str;
	size_t		i;

	i = ft_intlen(nbr, 10);
	str = ft_strnew(i);
	if (nbr < -2147483648 || nbr > 2147483647)
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
