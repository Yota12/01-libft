/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmuselie <jmuselie@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 15:20:19 by jmuselie          #+#    #+#             */
/*   Updated: 2021/03/04 16:35:52 by jmuselie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <strings.h>

char	*ft_strrchr(const char *str, int c)
{
	int	i;
	int	last_occur;

	i = 0;
	last_occur = NULL;
	while (str[i])
	{
		if (str[i] == (unsigned char)c)
			last_occur = i;
		i++;
	}
	if (last_occur)
		return (str[last_occur]);
	return (NULL);
}
