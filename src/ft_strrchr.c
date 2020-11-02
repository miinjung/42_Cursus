/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michoi <michoi@student.42soul.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 16:22:07 by michoi            #+#    #+#             */
/*   Updated: 2020/11/02 21:21:55 by michoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_header.h"

char	*strrchr(const char *s, int c)
{
	char	*temp;

	temp = s;
	while (*temp)
		s++;
	while (*temp)
	{
		if (*temp == (char)c)
			return (temp);
		if (temp == s)
			break ;
		temp--;
	}
	return (0);
}
