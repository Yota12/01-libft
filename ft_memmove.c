/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmuselie <jmuselie@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 15:20:18 by jmuselie          #+#    #+#             */
/*   Updated: 2021/03/04 16:15:37 by jmuselie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int			i;
	const void	*tmp;

	i = 0;
	if (!src && !dest)
		return (dest);
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
