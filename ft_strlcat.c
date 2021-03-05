/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmuselie <jmuselie@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 15:20:19 by jmuselie          #+#    #+#             */
/*   Updated: 2021/03/05 11:46:15 by jmuselie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dst[i] != '\0')
		i++;
	while (j < size && src[j])
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < size)
		dst[i + j] = 0;
	return (i + ft_strlen(src));
}
