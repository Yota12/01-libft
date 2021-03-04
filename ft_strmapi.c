/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 17:29:52 by marvin            #+#    #+#             */
/*   Updated: 2021/02/23 17:29:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
   int  i;
   char *fresh;

    i = 0;
    if (!s)
        return (NULL);
    if (!(fresh = (malloc (sizeof(char) * ft_strlen(s) + 1))))
        return (NULL);
    while (str[i])
	{
		fresh[i] = f(i, str[i]);
		i++;
	}
	fresh[i] = '\0';
	return (fresh);
}