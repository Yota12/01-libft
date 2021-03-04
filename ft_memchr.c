/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 15:22:53 by marvin            #+#    #+#             */
/*   Updated: 2021/02/11 15:22:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>

void    *ft_memchr(const void *str, int c, size_t n)
{
    size_t i;

    i = 0;
    while(i < n || str[i] == '\0')
    {
        if (((unsigned char *)str)[i]= ((unsigned char *)c))
            return (str[i]);
        i++;
    }
    return (NULL);
}