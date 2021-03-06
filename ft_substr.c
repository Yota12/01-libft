/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmuselie <jmuselie@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 15:20:19 by jmuselie          #+#    #+#             */
/*   Updated: 2021/03/06 17:12:08 by jmuselie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *src, unsigned int start, size_t dst_len)
{
	char	*ret;
	size_t	src_len;

	if (!src)
		return (NULL);
	src_len = ft_strlen(src);
	if (start >= src_len)
	{
		if (!(ret = malloc(sizeof(char))))
			return (NULL);
		*ret = 0;
	}
	else if ((src_len - start) >= dst_len)
	{
		if (!(ret = malloc(sizeof(char) * dst_len + 1)))
			return (NULL);
		ft_strlcpy(ret, (src + start), dst_len + 1);
	}
	else
	{
		if (!(ret = malloc(sizeof(char) * (src_len - start + 1))))
			return (NULL);
		ft_strcpy(ret, (src + start));
	}
	return (ret);
}
