/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmuselie <jmuselie@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 15:20:19 by jmuselie          #+#    #+#             */
/*   Updated: 2021/03/07 13:25:21 by jmuselie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	if (!src || !dest)
		return (0);
	while (src[i] != '\0')
	{
		if (size > 0 && i < size - 1)
		{
			dest[j] = src[i];
			j++;
		}
		i++;
	}
	if (size > 0)
		dest[j] = '\0';
	return (i);
}
