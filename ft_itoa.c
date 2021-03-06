/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmuselie <jmuselie@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 15:20:18 by jmuselie          #+#    #+#             */
/*   Updated: 2021/03/06 17:28:57 by jmuselie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_recursive_digitizer(char *res, long lnb, int index)
{
	if (lnb >= 10)
		ft_recursive_digitizer(res, lnb / 10, index - 1);
	res[index] = lnb % 10 + 48;
}

size_t	ft_digit_count(long lnb)
{
	size_t	i;

	i = 0;
	if (lnb < 0)
	{
		lnb = -lnb;
		i++;
	}
	while (lnb >= 10)
	{
		lnb /= 10;
		i++;
	}
	i++;
	return (i);
}

char	*ft_itoa(int nb)
{
	long	lnb;
	char	*res;
	int		digit_count;

	lnb = nb;
	digit_count = ft_digit_count(lnb);
	res = malloc(sizeof(char) * (digit_count + 1));
	if (!res)
		return (NULL);
	if (lnb < 0)
	{
		res[0] = '-';
		lnb = -lnb;
	}
	res[digit_count] = '\0';
	ft_recursive_digitizer(res, lnb, digit_count - 1);
	return (res);
}
