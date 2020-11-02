/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michoi <michoi@student.42soul.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 19:19:42 by michoi            #+#    #+#             */
/*   Updated: 2020/11/02 21:18:34 by michoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_header.h"

char	*ft_strchr(const char *s, int c)
{
	char	*temp;

	temp = s;
	while (*temp)
	{
		if (*temp == (char)c)
			return (temp);
		temp++;
	}
	return (0);
}
