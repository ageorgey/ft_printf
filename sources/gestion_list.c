/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gestion_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ageorgey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 18:16:18 by ageorgey          #+#    #+#             */
/*   Updated: 2018/12/03 19:57:35 by ageorgey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft/libft.h"
#include "../includes/ft_printf.h"

list			*init_list()
{
	list		*l;

	if (!(l = (list*)malloc(sizeof(l))))
	{
		ft_putendl_fd("Erreur : allocation memoire impossible", 2);
		EXIT_FAILURE;
	}
	else
	{
		l->size = 0;
		l->first = NULL;
		l->end = NULL;
	}
	return (l);
}

element			*init_element()
{
	element		*e;

	if (!(e = (element*)malloc(sizeof(e))))
	{
		ft_putendl_fd("Erreur : allocation memoire impossible", 2);
		EXIT_FAILURE;
	}
	else
	{
		e->struntil = NULL;
		e->typeformat = NULL;
		e->next = NULL;
	}
	return (e);
}

list			boot_list(const char *format)
{
	list		*l;
	element		*e;
	size_t		i;

	l = init_list();
	while (
}