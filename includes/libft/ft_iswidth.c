/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iswidth.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ageorgey <ageorgey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 16:09:29 by ageorgey          #+#    #+#             */
/*   Updated: 2019/02/26 16:09:30 by ageorgey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int				ft_iswidth(char *str)
{
	if (ft_issize(*str) || ft_istype(*str) || *str == '.')
		return (0);
	while (*str && ft_isdigit(*str))
		str++;
	if (*str == '.' || ft_issize(*str) || ft_istype(*str))
		return (1);
	return (0);
}
