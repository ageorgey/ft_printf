/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_istype.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ageorgey <ageorgey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 16:09:20 by ageorgey          #+#    #+#             */
/*   Updated: 2019/02/26 16:09:22 by ageorgey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int				ft_istype(int c)
{
	char		*type;

	type = "diouxXbcspf";
	while (*type)
	{
		if (*type == c)
			return (1);
		type++;
	}
	return (0);
}
