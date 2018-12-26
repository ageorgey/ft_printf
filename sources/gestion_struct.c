/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gestion_struct.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ageorgey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 18:16:18 by ageorgey          #+#    #+#             */
/*   Updated: 2018/12/04 19:09:07 by ageorgey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft/libftprintf.h"
#include "../includes/ft_printf.h"

s_format			*init_struct()
{
	s_format		*sf;
	if (!(sf = (s_format*)malloc(sizeof(sf))))
	{
		ft_putendl_fd("Allocation de mémoire impossible pour s_format !", 2);
		return (NULL);
	}
	else
	{
		sf->flags = NULL;
		sf->width = NULL;
		sf->precision = NULL;
		sf->size = NULL;
		sf->type = NULL;
	}
	return (sf);
}

s_format			*parse_format(char *format, s_format *sf)
{
	format = ft_strchr(format, '%') + 1;
	ft_putendl("format = ft_strchr(format, '%') + 1;");
	format = parse_flags(format, sf);
	ft_putendl("format = parse_flags(format, sf);");
	ft_putendl(sf->flags);
	format = parse_width(format, sf);
	ft_putendl("format = parse_width(format, sf);");
	ft_putendl(sf->width);
	format = parse_precision(format, sf);
	ft_putendl("format = parse_precision(format, sf);");
	ft_putendl(sf->precision);
	format = parse_size(format, sf);
	ft_putendl("format = parse_size(format, sf);");
	ft_putendl(sf->size);
	format = parse_type(format, sf);
	ft_putendl("format = parse_type(format, sf);");
	ft_putendl(sf->type);
	return (sf);
}

int				main(int ac, char **av)
{
	char		*str;
	s_format	*sf;

	str = ft_strdup(av[1]);
	sf = init_struct();
	if (ac == 2)
		parse_format(str, sf);
	else
	{
		ft_putendl_fd("Erreur : besoin d'un seul argument", 2);
		EXIT_FAILURE;
	}
	free(str);
	free(sf);
	return (0);
}
