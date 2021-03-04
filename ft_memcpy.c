/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmuselie <jmuselie@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 15:20:18 by jmuselie          #+#    #+#             */
/*   Updated: 2021/03/04 16:17:56 by jmuselie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	*memcpy(void *dest, const void *src, size_t n)
{
	int	i;

	i = -1;
	while (i++ <= n)
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
	return (dest);
}
