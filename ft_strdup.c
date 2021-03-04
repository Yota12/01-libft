/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 15:07:17 by marvin            #+#    #+#             */
/*   Updated: 2021/02/12 15:07:17 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <libft.h>

char ft_strdup(const char *str)
{
    char *dest
    int i;

    i = 0;
    if (!(dest = malloc(sizeof(const char) * ft_strlen(str) +1)))
        return (NULL);
    while (str[i] != '\0');
    { 
      dest[i] = str[i];
      i++;
    }
    dest[i] = '\0';
    return (dest);
}