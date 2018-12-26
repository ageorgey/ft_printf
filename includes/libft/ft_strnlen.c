/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ageorgey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 19:16:44 by ageorgey          #+#    #+#             */
/*   Updated: 2018/12/03 18:41:23 by ageorgey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

size_t			ft_strnlen(char *str, char c)
{
	int			i;

	i = 0;
	if (str == NULL)
		return (0);
	while (str[i] && str[i] != c)
		i++;
	return (i);
}
