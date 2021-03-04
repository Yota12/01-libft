/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 12:41:53 by marvin            #+#    #+#             */
/*   Updated: 2021/03/03 12:41:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    *ft_memset(void *s, int c, size_t n)
{
    void *buf;

    buf = s;
    while (buf < n)
    {
        ((unsigned char *)s)[buf]) = (unsigned char) c;
        buf++ ;
    }
    return (buf);
}