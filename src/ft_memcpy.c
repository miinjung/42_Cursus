/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michoi <michoi@student.42soul.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 18:21:53 by michoi            #+#    #+#             */
/*   Updated: 2020/11/02 21:31:49 by michoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_header.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char	*result;
	unsigned char	*cmp;

	result = dst;
	cmp = src;
	while (n--)
	{
		*result = *cmp;
		result++;
		cmp++;
	}
	return (dst);
}
