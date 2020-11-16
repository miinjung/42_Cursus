/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michoi <michoi@student.42soul.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 17:57:49 by michoi            #+#    #+#             */
/*   Updated: 2020/11/16 20:47:21 by michoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*origin;
	t_list	*result;

	if (lst == 0 || f == 0)
		return (0);
	if (!(result = ft_lstnew((*f)(lst->content))))
		return (0);
	origin = result;
	lst = lst->next;
	while (lst)
	{
		if (!(result->next = ft_lstnew((*f)(lst->content))))
		{
			ft_lstclear(&origin, del);
			return (0);
		}
		lst = lst->next;
		result = result->next;
	}
	return (origin);
}
