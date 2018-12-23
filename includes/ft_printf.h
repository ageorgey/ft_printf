/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ageorgey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 17:57:21 by ageorgey          #+#    #+#             */
/*   Updated: 2018/12/04 17:11:50 by ageorgey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft/libft.h"

typedef struct		s_format
{
	char	*flags;
	char	*widith;
	char	*precision;
	char	*size;
	char	*type;
}					s_format;
s_format			*init_struct();

#endif
