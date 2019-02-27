/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ageorgey <ageorgey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 16:48:33 by ageorgey          #+#    #+#             */
/*   Updated: 2019/02/26 16:48:35 by ageorgey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char			*ft_itoa_base(int nbr, size_t base)
{
	char		*str;
	size_t		i;

	i = ft_intlen(nbr, base);
	str = ft_strnew(i);
	if (nbr == 0)
		str[0] = '0';
	if (nbr < -2147483648 || nbr > 2147483647 || base == 0)
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
