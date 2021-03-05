/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmuselie <jmuselie@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 15:20:18 by jmuselie          #+#    #+#             */
/*   Updated: 2021/03/05 11:13:56 by jmuselie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_countdigit(int n)
{
	int i;

	i = 1;
	if (n == -2147483648)
	{
		i++;
		n = -147483648;
	}
	if (n < 0)
		n = -n;
	while (n >= 10)
	{
		i++;
		n = (n / 10);
	}
	return (i);
}

char			*ft_itoa(int n)
{
	int		count;
	char	*str;
	char	negative;

	negative = 0;
	if (n == -2147483648)
		return ("-2147483648");
	if (n < 0)
		negative = 1;
	count = ft_countdigit(n);
	if (!(str = malloc(count + negative)))
		return (NULL);
	if (negative)
	{
		n = -n;
		str[0] = '-';
	}
	while (count > 0)
	{
		str[count + negative - 1] = (n % 10) + '0';
		count--;
		n = n / 10;
	}
	return (str);
}
