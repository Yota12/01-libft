/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmuselie <jmuselie@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 16:05:41 by jmuselie          #+#    #+#             */
/*   Updated: 2021/03/04 16:17:36 by jmuselie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && (unsigned char(s1)[i]) == (unsigned char(s2)[i]) 
			&& unsigned char (s1)[i] != '\0')
		i++;
	return (unsigned char (s2)[i] - unsigned char (s1)[i]);
}
