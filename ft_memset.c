/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmuselie <jmuselie@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 15:20:18 by jmuselie          #+#    #+#             */
/*   Updated: 2021/03/04 16:17:18 by jmuselie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *s, int c, size_t n)
{
	void	*buf;

	buf = s;
	while (buf < n)
	{
		(((unsigned char *)s)[buf]) = (unsigned char)c;
		buf++;
	}
	return (buf);
}
