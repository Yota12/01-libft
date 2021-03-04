/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmuselie <jmuselie@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 15:20:18 by jmuselie          #+#    #+#             */
/*   Updated: 2021/03/04 16:04:23 by jmuselie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t i;

	i = -1;
	if (!dest && !src)
		return (NULL);
	while (i++ <= n)
	{
		((unsigned char *)dest[i]) = ((unsigned char *)src[i]);
		if ((unsigned char *)src[i] == (unsigned char)c)
			return (dest);
	}
	return (NULL);
}
