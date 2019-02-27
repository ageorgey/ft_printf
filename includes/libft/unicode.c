/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unicode.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ageorgey <ageorgey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 22:27:25 by ageorgey          #+#    #+#             */
/*   Updated: 2019/02/26 23:54:43 by ageorgey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include        "libftprintf.h"
#include        <wchar.h>

size_t          *bytes_bits_len(long long c)
{
    char        *bin;
    size_t      *bb;

    bin = ft_llongtoa_base(c, 2);
    if (!(bb = (size_t*)malloc(sizeof(size_t) * 2)))
        return (NULL);
    bb[0] = ft_strlen(bin);
    if (bb[0] <= 7)
        bb[1] = 1;
    else if (bb[0] >= 8 && bb[0] <= 11)
        bb[1] = 2;
    else if (bb[0] >= 12 && bb[0] <= 16)
        bb[1] = 3;
    else if (bb[0] >= 17 && bb[0] <= 21)
        bb[1] = 4;
    else if (bb[0] >= 22 && bb[0] <= 26)
        bb[1] = 5;
    else if (bb[0] >= 27 && bb[0] <= 31)
        bb[1] = 6;
    else if (bb[0] >= 32 && bb[0] <= 36)
        bb[1] = 7;
    else
        bb[1] = 0;
    return (bb);
}

char            **create_bytes(char *bin, size_t *bb)
{
    char        **bytes;
    size_t      i;

    if(!(bytes = (char**)malloc(sizeof(char*) * bb[1])))
        return (NULL);
    i = 0;
    if (bb[1] == 1)
        bytes[i] = ft_fillzero(1);
    else
    {
        bytes[i++] = ft_strjoin(ft_fillone(bb[1]), ft_fillzero(1));
        while (i < bb[1])
            bytes[i++] = ft_strjoin("1", ft_fillzero(1));
    }
    return (bytes);
}

char            **fill_bytes(char **bytes, long long c, size_t *bb)
{
    char        *bin;
    char        *tmp;
    size_t      i;

    bin = ft_llongtoa_base(c, 2);
    tmp = ft_strdup(bin);
    i = bb[1] - 1;
    if (i == 0)
    {
        bytes[i] = ft_strjoin(bytes[i], ft_fillzero(7 - bb[0]));
        bytes[i] = ft_strjoin(bytes[i], tmp);
    }
    while (i > 0)
    {
        bytes[i] = ft_strjoin(bytes[i], &tmp[bb[0] - 6]);
        tmp = ft_strsub(bin, 0, bb[0] - 6);
        bb[0] -= 6;
        i--;
    }
    if (i == 0 && bb[1] > 1)
    {
        bytes[i] = ft_strjoin(bytes[i], ft_fillzero(8 - bb[1] - 1 - bb[0]));
        bytes[i] = ft_strjoin(bytes[i], tmp);
    }
    return (bytes);
}

void            ft_putchar_unicode(wint_t c)
{
    char            **bytes;
    char            *bin;
    size_t          *bb;
    size_t          i;

    bin = ft_itoa_base(c, 2);
    bytes = fill_bytes(create_bytes(bin, bytes_bits_len(c)), c, bytes_bits_len(c));
    bb = bytes_bits_len(c);
    i = 0;
    while (i < bb[1])
    {
        c = ft_atoll_base_bin(bytes[i]);
        write (1, &c, 1);
        i++;
    }
}

void            ft_putstr_unicode(wchar_t *str)
{
    size_t      i;

    i = 0;
    while (str[i])
        ft_putchar_unicode(str[i++]);
}

int         main(int ac, char **av)
{
    wchar_t  *str;

    str = L"ḶḶḶḶḶ";
    ft_putstr_unicode(str);
    ft_putchar('\n');
    return (0);
}
