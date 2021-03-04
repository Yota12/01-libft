/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 17:55:31 by marvin            #+#    #+#             */
/*   Updated: 2021/02/12 17:55:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>

char *strcat(char *dest, const char *src)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (dest[i])
        i++;
    while (src[j])
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return (dest);
}