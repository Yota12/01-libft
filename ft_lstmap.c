/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmuselie <jmuselie@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 14:39:08 by jmuselie          #+#    #+#             */
/*   Updated: 2021/03/07 14:39:10 by jmuselie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*fct)(void *), void (*del)(void *))
{
	t_list	*ret;
	t_list	*ptr;
	t_list	*new_elem;

	if (!lst)
		return (NULL);
	if (!(ret = ft_lstnew((*fct)(lst->content))))
		return (NULL);
	lst = lst->next;
	ptr = ret;
	while (lst)
	{
		if (!(new_elem = ft_lstnew((*fct)(lst->content))))
		{
			ft_lstclear(&ret, del);
			return (NULL);
		}
		ptr->next = new_elem;
		lst = lst->next;
		ptr = ptr->next;
	}
	return (ret);
}
