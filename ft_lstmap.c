/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michoi <michoi@student.42soul.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 17:57:49 by michoi            #+#    #+#             */
/*   Updated: 2020/11/16 19:00:41 by michoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*temp;

	if (lst == 0 || f == 0 || del == 0)
		return (0);
	ft_lstiter(lst, *f);
	while (lst)
	{
		if (!(temp = (t_list *)malloc(sizeof(t_list))))
			return (0);
		temp->content = lst->content;
		temp->next = lst->next;
		lst = lst->next;
		temp = temp->next;
	}
	ft_lstclear(lst, del);
	return (result);
}
