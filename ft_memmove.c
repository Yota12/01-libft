/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 14:41:18 by marvin            #+#    #+#             */
/*   Updated: 2021/02/11 14:41:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <strings.h>

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    int i;
    const void *tmp;

    i = 0;
    if (!src && !dest)
        return (dest);
    if (dest < src)
    {
        i = n + 1;
        while (i-- > 0)
            ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
    }
    while (i <= n)
    {
        ((unsigned char *)tmp)[i] = ((unsigned char *)src)[i];
        ((unsigned char *)dest)[i] = ((unsigned char *)tmp)[i];
        i++;
    }
    return (dest)
}