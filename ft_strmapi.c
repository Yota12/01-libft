/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmuselie <jmuselie@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 15:20:19 by jmuselie          #+#    #+#             */
/*   Updated: 2021/03/05 11:57:36 by jmuselie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <strings.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*fresh;

	i = 0;
	if (!s)
		return (NULL);
	if (!(fresh = (malloc(sizeof(char) * ft_strlen(s) + 1))))
		return (NULL);
	while (s[i])
	{
		fresh[i] = f(i, s[i]);
		i++;
	}
	fresh[i] = '\0';
	return (fresh);
}
