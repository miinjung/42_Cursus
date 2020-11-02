/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michoi <michoi@student.42soul.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 16:48:58 by michoi            #+#    #+#             */
/*   Updated: 2020/11/02 21:31:46 by michoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_header.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*temp;

	temp = s;
	while (n--)
	{
		if (*temp == (unsigned char)c)
			return (s);
		s++;
	}
	return (0);
}
