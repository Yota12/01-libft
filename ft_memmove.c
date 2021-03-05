/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmuselie <jmuselie@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 15:20:18 by jmuselie          #+#    #+#             */
/*   Updated: 2021/03/05 12:17:17 by jmuselie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <strings.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	const void	*tmp;

	i = 0;
	if (!src && !dest)
		return (dest);
	if (!(tmp = malloc(sizeof(char) * n + 1)))
		return (NULL);
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
	return (dest);
}
