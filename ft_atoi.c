/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmuselie <jmuselie@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 15:20:18 by jmuselie          #+#    #+#             */
/*   Updated: 2021/03/06 17:50:08 by jmuselie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned long	atoi;
	int				negative;

	negative = 1;
	atoi = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str++ == '-')
			negative = negative * -1;
	}
	while (ft_isdigit(*str))
		atoi = atoi * 10 + (*str++ - 48);
	/*if (atoi > 9223372036854775807 && negative == -1)
		return (0);
	else if (atoi > 9223372036854775807 && negative == 1)
		return (-1);*/
	return (atoi * negative);
}
