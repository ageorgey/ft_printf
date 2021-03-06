/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ageorgey <ageorgey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 16:17:18 by ageorgey          #+#    #+#             */
/*   Updated: 2019/02/26 16:17:20 by ageorgey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

size_t			ft_power(size_t nbr, size_t power)
{
	size_t		n;

	n = nbr;
	while (--power)
		nbr *= n;
	return (nbr);
}
