/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmuselie <jmuselie@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 15:20:19 by jmuselie          #+#    #+#             */
/*   Updated: 2021/03/06 17:51:02 by jmuselie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;

	i = 0;
	if (!str && !to_find)
		return (NULL);
	if (to_find[i] == '\0')
		return ((char *)str);
	while (*str && to_find[i] && n--)
	{
		if (*str++ == to_find[i])
			i++;
		else
		{
			str = str - i;
			n = n + i;
			i = 0;
		}
	}
	if (!to_find[i])
		return ((char *)str - i);
	return (NULL);
}
