/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmuselie <jmuselie@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 15:20:19 by jmuselie          #+#    #+#             */
/*   Updated: 2021/03/05 12:00:30 by jmuselie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1,const char *s2, size_t n)
{
	unsigned int i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && (s1[i] == s2[i] && s1[i] != '\0'))
		i++;
	return (s1[i] - s2[i]);
}
