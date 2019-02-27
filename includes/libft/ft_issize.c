/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_issize.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ageorgey <ageorgey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 16:08:24 by ageorgey          #+#    #+#             */
/*   Updated: 2019/02/26 16:08:26 by ageorgey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int				ft_issize(int c)
{
	char		*size;

	size = "hlL";
	while (*size)
	{
		if (*size == c)
			return (1);
		size++;
	}
	return (0);
}
