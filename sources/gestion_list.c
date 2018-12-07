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
		l->latest = NULL;
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

	l = init_list();
	while (l->size < n)
	{
		e = init_element();
		l->size++;
		if (l->size == 1)
		{
			l->first = e;
			l->latest = e;
		}
		else
			l->latest = e;
	}
	return (l);
}

list			*boot_element(const char *format, list *l)
{
	char		*str;
	element		*e;
	size_t		n;

	str = ft_strcpy(str, format);
	e = l->first;
	n = 0;
	while (n < l->size)
	{
		//Seg fault à partir de là
		e->struntil = ft_strnew(ft_strnlen(str, '%'));
		ft_putendl("2");
		e->struntil = ft_strncpy(e->struntil, str, ft_strnlen(str, '%'));
		ft_putendl("3");
		str = ft_strchr(str, '%');
		ft_putendl("4");
		e->typeformat = ft_strnew(ft_strnlen(str, ' '));
		ft_putendl("5");
		ft_strncpy(e->typeformat, str, ft_strnlen(str, ' '));
		ft_putendl("6");
		ft_putendl(e->struntil);
		ft_putendl("7");
		ft_putendl(e->typeformat);
		ft_putendl("8");
		e = e->next;
		ft_putendl("9");
		n++;
	}
	return (l);
}

int			main()
{
	char str[20] = "string %s string %d";
	list	*l;

	l = boot_list(str, ft_countchar(str, '%'));
	return (0);
}
