/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmuselie <jmuselie@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 15:20:18 by jmuselie          #+#    #+#             */
/*   Updated: 2021/03/04 16:05:18 by jmuselie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n || str[i] == '\0')
	{
		if (((unsigned char *)str)[i] = ((unsigned char *)c))
			return (str[i]);
		i++;
	}
	return (NULL);
}
