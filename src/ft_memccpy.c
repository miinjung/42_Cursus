/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michoi <michoi@student.42soul.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 15:50:26 by michoi            #+#    #+#             */
/*   Updated: 2020/11/02 21:31:45 by michoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_header.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*result;
	unsigned char	*cmp;

	result = dst;
	cmp = src;
	while (n--)
	{
		if (cmp == c)
			return (result++);
		*result = *cmp;
		result++;
		cmp++;
	}
	return (0);
}
