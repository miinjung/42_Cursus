/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michoi <michoi@student.42soul.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 16:30:02 by michoi            #+#    #+#             */
/*   Updated: 2020/11/02 21:21:20 by michoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_header.h"

char	*strnstr(const char *big, const char *little, size_t len)
{
	char	*temp;
	size_t	n;
	size_t	little_len;
	size_t	index;

	temp = big;
	n = 0;
	little_len = 0;
	while (*(little + little_len))
		little_len++;
	if (*little == 0)
		return (temp);
	while (n < len - little_len)
	{
		if (*(temp + n) == *(little))
		{
			index = 0;
			while (*(temp + n + index) != *(little + index))
				index++;
			if (index == little_len)
				return (temp + n);
		}
		n++;
	}
	return (0);
}
