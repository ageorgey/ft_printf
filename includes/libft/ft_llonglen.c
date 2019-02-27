/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_llonglen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ageorgey <ageorgey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 16:11:34 by ageorgey          #+#    #+#             */
/*   Updated: 2019/02/26 16:11:35 by ageorgey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

size_t			ft_llonglen(long long nbr, size_t base)
{
	size_t		i;

	i = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0 && base == 10)
	{
		nbr *= -1;
		i++;
	}
	while (nbr)
	{
		nbr = nbr / base;
		i++;
	}
	return (i);
}
