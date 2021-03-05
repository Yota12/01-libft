/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmuselie <jmuselie@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 15:20:18 by jmuselie          #+#    #+#             */
/*   Updated: 2021/03/05 13:56:22 by jmuselie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <strings.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n || ((unsigned char *)str)[i] == '\0')
	{
		if (((unsigned char *)str)[i] == c)
			return (str[i]);
		i++;
	}
	return (NULL);
}
