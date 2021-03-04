/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 15:26:09 by marvin            #+#    #+#             */
/*   Updated: 2021/03/02 15:26:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int		ft_is_sep(char c, char *charset)
{
	int i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

char	**ft_split(char *str, char *charset)
{
	char	*start;
	char	**words;
	int		i;

	words = malloc(sizeof(char*) * ((ft_strlen(str) / 2) + 2));
	if (words == 0)
		return (NULL);
	i = 0;
	while (*str)
	{
		while (*str && ft_is_sep(*str, charset) == 1)
			str++;
		start = str;
		while (*str && ft_is_sep(*str, charset) == 0)
			str++;
		words[i] = malloc(sizeof(char) * ((str - start) + 1));
		if (words[i] == 0)
			return (NULL);
		ft_strncpy(words[i], start, (str - start));
		words[i][str - start] = 0;
		if (start != str)
			i++;
	}
	words[i] = 0;
	return (words);
}
