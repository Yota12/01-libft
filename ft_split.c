/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmuselie <jmuselie@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 15:54:17 by jmuselie          #+#    #+#             */
/*   Updated: 2021/03/07 13:56:12 by jmuselie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		**ft_failsafe(char **words, int count)
{
	while (count--)
		free(words[count]);
	free(words);
	return (NULL);
}

static size_t	ft_word_count(const char *str, const char sep)
{
	size_t		res;
	char		*start;

	res = 0;
	while (*str)
	{
		while (*str == sep && *str)
			str++;
		start = (char *)str;
		while (*str != sep && *str)
			str++;
		if (str != start)
			res++;
	}
	return (res);
}

char			**ft_split(char const *str, char sep)
{
	char		**words;
	char		*start;
	int			i;

	if (!str ||
		!(words = malloc(sizeof(char *) * (ft_word_count(str, sep) + 1))))
		return (NULL);
	i = 0;
	while (*str)
	{
		while (*str == sep && *str)
			str++;
		start = (char *)str;
		while (*str != sep && *str)
			str++;
		if (str != start)
		{
			if (!(words[i] = malloc(sizeof(char) * (str - start + 1))))
				return (ft_failsafe(words, i));
			ft_strlcpy(words[i++], start, str - start + 1);
		}
	}
	words[i] = 0;
	return (words);
}
