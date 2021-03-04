/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 17:22:57 by marvin            #+#    #+#             */
/*   Updated: 2021/02/12 17:22:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>

char    *strncpy(char *dest, const char *src, size_t n)
{
    int i;

    i = 0;
    while (i < n && src[i] != '\0' )
    {
        dest[i] = src[i];
        i++;
    }
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }
    return (dest);
}