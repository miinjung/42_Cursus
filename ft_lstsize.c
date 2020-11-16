/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michoi <michoi@student.42soul.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 17:23:05 by michoi            #+#    #+#             */
/*   Updated: 2020/11/16 20:06:11 by michoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	int		length;
	t_list	*temp;

	length = 0;
	temp = lst;
	while (temp)
	{
		length++;
		temp = temp->next;
	}
	return (length);
}
