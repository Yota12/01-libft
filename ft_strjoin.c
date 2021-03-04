/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmuselie <jmuselie@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 15:20:19 by jmuselie          #+#    #+#             */
/*   Updated: 2021/03/04 16:30:17 by jmuselie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (dest[i] != '\0')
		dest[i] = '\0';
	return (dest);
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (src[i] == '\0')
		dest[i] = '\0';
	return (dest);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		ft_strlen_doubleptr(char **str, int size)
{
	int i;
	int n;
	int u;

	n = 0;
	i = 0;
	u = 0;
	while (n < size)
	{
		while (str[n][i] != '\0')
			i++;
		u = u + i;
		i = 0;
		n++;
	}
	return (u);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		n;
	char	*final;

	n = 0;
	if (size == 0)
	{
		final = NULL;
		return (final);
	}
	if (!(final = malloc(sizeof(char) * ft_strlen_doubleptr(strs, size)
					+ (ft_strlen(sep) * (size - 1) + 1))))
		return (NULL);
	ft_strcpy(final, strs[0]);
	while (size > 0)
	{
		if (n > 0)
			ft_strcat(final, strs[n]);
		if (size != 1)
			ft_strcat(final, sep);
		n++;
		size--;
	}
	return (final);
}
