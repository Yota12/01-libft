/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmuselie <jmuselie@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 15:20:19 by jmuselie          #+#    #+#             */
/*   Updated: 2021/03/04 15:23:27 by jmuselie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(char *str, char *to_find, size_t n)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i] && i < n)
	{
		while (str[i] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i - j]);
			i++;
			j++;
		}
		i = i - j;
		j = 0;
		i++;
	}
	return (0);
}
