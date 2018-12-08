/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gestion_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ageorgey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 18:16:18 by ageorgey          #+#    #+#             */
/*   Updated: 2018/12/04 19:09:07 by ageorgey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft/libft.h"
#include "../includes/ft_printf.h"
#include <stdio.h>

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
		l->last = NULL;
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


list			*boot_list(const char *format, size_t n)
{
	list		*l;
	element		*e;
	element		*new_e;

	l = init_list();
	while (l->size <= n)
	{
		if (l->size == 1)
		{
			e = init_element();
			l->first = e;
		}
		else if (l->size > 1)
		{
			new_e = init_element();
			l->last = new_e;
			e->next = new_e;
			e = new_e;
		}
		l->size++;
	}
	return (l);
}

list			*boot_element(const char *format)
{
	char		*str;
	list		*l;
	element		*e;
	element		*new_e;
	size_t		n;

	str = ft_strcpy(str, format);
	l = boot_list(format, ft_countchar(str, '%'));
	e = l->first;
	n = 0;
	while (n < l->size)//loading..
	{
		e->struntil = ft_strnew(ft_strnlen(str, '%'));
		e->struntil = ft_strncpy(e->struntil, str, ft_strnlen(str, '%'));
		str = ft_strpchr(str, '%');
		e->typeformat = ft_strnew(ft_strnlen(str, ' '));
		ft_strncpy(e->typeformat, str, ft_strnlen(str, ' '));
		new_e = e->next;
		e = new_e;
		n++;
	}
	return (l);
}

int			main()
{
	char str[20] = "string %s string %d";
	static list		*l;

	l = boot_element(str);
	return (0);
}
