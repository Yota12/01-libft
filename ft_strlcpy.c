/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 12:40:50 by marvin            #+#    #+#             */
/*   Updated: 2021/03/03 12:40:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
	{
		if (size > 0 && i < size - 1)
		{
			dest[j] = src[i];
			j++;
		}
		i++;
	}
	if (size > 0)
		dest[j] = '\0';
	return (i);
}