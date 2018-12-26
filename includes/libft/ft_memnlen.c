/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memnlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ageorgey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 19:16:44 by ageorgey          #+#    #+#             */
/*   Updated: 2018/12/03 18:52:16 by ageorgey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

size_t			ft_memnlen(void *s, char c)
{
	int			i;
	char		*str;

	i = 0;
	str = (char *)s;
	if (str == NULL)
		return (0);
	while (str[i] && str[i] != c)
		i++;
	return (i);
}
