/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ageorgey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/17 14:27:38 by ageorgey          #+#    #+#             */
/*   Updated: 2017/12/17 14:27:41 by ageorgey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_strpchr(const char *s, int c)
{
	int i;

	i = 0;
	if (s[i] == '\0' && c == '\0')
		return ((char*)&s[i]);
	while (s[i])
	{
		if (s[i] == c)
			return ((char*)&s[i + 1]);
		i++;
	}
	if (s[i] == c)
		return ((char *)&s[i]);
	return (NULL);
}
