/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 21:00:22 by marvin            #+#    #+#             */
/*   Updated: 2021/02/24 21:00:22 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *substr;
    int i;

    i = 0;
    if (!(substr = (malloc(sizeof(char) * ft_strlen(s) + 1))
        return (NULL);
    while (s[start])
    {
        substr[i] = s[start];
        start++;
        i++;
    }
    substr[i] = '\0';
    return (substr)
}