/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillzero.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ageorgey <ageorgey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 15:02:55 by ageorgey          #+#    #+#             */
/*   Updated: 2019/02/26 15:03:01 by ageorgey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char			*ft_fillzero(size_t p)
{
	char		*str;
	size_t		i;

	i = 0;
	str = ft_strnew(p);
	while (i < p)
		str[i++] = '0';
	str[i] = '\0';
	return (str);
}
