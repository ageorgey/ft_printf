/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillone.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ageorgey <ageorgey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 15:49:11 by ageorgey          #+#    #+#             */
/*   Updated: 2019/02/26 15:49:53 by ageorgey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char			*ft_fillone(size_t p)
{
	char		*str;
	size_t		i;

	i = 0;
	str = ft_strnew(p);
	while (i < p)
		str[i++] = '1';
	str[i] = '\0';
	return (str);
}
