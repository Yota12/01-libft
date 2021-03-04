/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 19:32:58 by marvin            #+#    #+#             */
/*   Updated: 2021/02/12 19:32:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strrchr(const char *str, int c)
{
    int i;
    int last_occur;

    i = 0;
    last_occur = NULL;
    while (str[i])
    {
        if (str[i] == (unsigned char)c)
            last_occur = i;
        i++;
    }
    if (last_occur)
        return (str[last_occur])
    return (NULL)
}