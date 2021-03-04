/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmuselie <jmuselie@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 15:20:19 by jmuselie          #+#    #+#             */
/*   Updated: 2021/03/04 16:37:35 by jmuselie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <strings.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str_trim;
	int		index;
	int		i;
	int		j;

	i = -1;
	j = 0;
	index = 0;
	if (!(str_trim = (malloc(sizeof(char) * ft_strlen(s1) + 1))))
		return (NULL);
	while (s1[j])
	{
		while (set[index] != '\0')
		{
			if (s1[j] == set[index])
				j++;
			else
				index++;
		}
		index = 0;
		str_trim[i] = s1[j];
		i++;
	}
	str_trim[i] = '\0';
	return (str_trim);
}
