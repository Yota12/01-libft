/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 21:11:05 by marvin            #+#    #+#             */
/*   Updated: 2021/02/24 21:11:05 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strtrim(char const *s1, char const *set)
{
    char *str_trim;
    int index;
    int i;
    int j;

    i = -1;
    j = 0;
    index = 0;
    if (!(str_trim = (malloc(sizeof(char) * ft_strlen(s1) + 1))))
        return (NULL);
    while (s1[j])
    {
        while (set[index] != '\0')
        {
            if (s1[j] == set[index])
                    j++;
            else 
                index++;
        }
        index = 0;
        str_trim[i] = s1[j];
        i++;
    }
    str_trim[i] = '\0';
    return(str_trim);
}