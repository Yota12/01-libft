/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.C                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 16:08:53 by marvin            #+#    #+#             */
/*   Updated: 2021/03/02 16:08:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    size_t i;

    i = -1;
    if (!dest && !src)
		return (NULL);
    while (i++ <= n)
    {
        ((unsigned char *)dest[i]) = ((unsigned char *)src[i]);
		if ((unsigned char *)src[i] == (unsigned char)c)
			return (dest);
    }
    return (NULL);
}