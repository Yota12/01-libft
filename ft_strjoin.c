/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmuselie <jmuselie@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 15:20:19 by jmuselie          #+#    #+#             */
/*   Updated: 2021/03/05 17:11:13 by jmuselie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		final_size;
	char	*final_string;

	if (!s1 || !s2)
		return (NULL);
	final_size = ft_strlen(s1) + ft_strlen(s2);
	if(!(final_string = malloc(sizeof(char) * final_size + 1)))
		return (NULL);
	ft_strcpy(final_string, s1);
	ft_strlcat(final_string, s2, final_size);
	return (final_string);
}
