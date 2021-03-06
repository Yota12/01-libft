/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmuselie <jmuselie@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 15:20:18 by jmuselie          #+#    #+#             */
/*   Updated: 2021/03/06 16:37:32 by jmuselie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	const void	*tmp;

	i = 0;
	tmp = dest;
	if (!src && !dest)
		return (dest);
	if (dest < src)
		ft_memcpy(dest, src, n);
	while (n--)
	{
		*((unsigned char *)(dest + n)) = 
		*((unsigned char *)(src + n));
	}
	return (dest);
}
