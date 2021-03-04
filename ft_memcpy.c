/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 16:15:46 by marvin            #+#    #+#             */
/*   Updated: 2021/02/10 16:15:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>

void    *memcpy(void *dest, const void *src, size_t n)
{
    int i;

    i = -1;
    while (i++ <= n)
        ((unsigned char *) dest)[i] = ((unsigned char *)src)[i];
    return (dest);
}