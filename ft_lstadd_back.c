/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmuselie <jmuselie@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 14:40:02 by jmuselie          #+#    #+#             */
/*   Updated: 2021/03/07 14:40:03 by jmuselie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst_start, t_list *new_elem)
{
	if (!*lst_start)
		*lst_start = new_elem;
	else
	{
		ft_lstlast(*lst_start)->next = new_elem;
	}
}
