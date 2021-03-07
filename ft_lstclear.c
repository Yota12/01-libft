/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmuselie <jmuselie@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 14:39:43 by jmuselie          #+#    #+#             */
/*   Updated: 2021/03/07 14:39:45 by jmuselie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*ptr;

	ptr = *lst;
	temp = ptr;
	while (temp)
	{
		ptr = temp;
		temp = ptr->next;
		ft_lstdelone(ptr, del);
	}
	*lst = NULL;
}
