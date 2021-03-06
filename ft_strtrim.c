/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmuselie <jmuselie@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 15:20:19 by jmuselie          #+#    #+#             */
/*   Updated: 2021/03/06 17:09:05 by jmuselie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *str, char const *charset)
{
	char	*start;
	char	*ret;

	if (!str)
		return (NULL);
	while (*str && ft_strchr(charset, *((char *)str)))
		str++;
	start = (char *)str;
	while (*str)
		str++;
	while (ft_strchr(charset, *((char *)str)) && str >= start)
		str--;
	str++;
	ret = malloc(sizeof(char) * (str - start + 1));
	if (!ret)
		return (NULL);
	ft_strlcpy(ret, start, str - start + 1);
	return (ret);
}
