/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 18:09:46 by marvin            #+#    #+#             */
/*   Updated: 2021/02/11 18:09:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>

int    ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;

    i = 0;
    if (n == 0)
        return (0);
    while (i < n - 1 && (unsigned char *(s1)[i]) == (unsigned char *(s2)[i]) 
        && unsigned char *(s1)[i] != '\0')
            i++;
    return (unsigned char *(s2)[i] - unsigned char *(s1)[i]);
}