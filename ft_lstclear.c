/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michoi <michoi@student.42soul.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 17:47:48 by michoi            #+#    #+#             */
/*   Updated: 2020/11/16 17:57:05 by michoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (lst == 0 || del == 0)
		return ;
	temp = *lst;
	while (temp->next)
	{
		del(temp->content);
		free(temp);
		temp++;
	}
	del(temp->content);
	free(temp);
	free(lst);
}
