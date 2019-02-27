/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupper.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ageorgey <ageorgey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 16:18:30 by ageorgey          #+#    #+#             */
/*   Updated: 2019/02/26 16:18:32 by ageorgey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char			*ft_strupper(char *str)
{
	int			i;
	char		*s;

	i = -1;
	s = ft_strdup(str);
	while (s[++i])
		s[i] = ft_toupper(s[i]);
	return (s);
}
