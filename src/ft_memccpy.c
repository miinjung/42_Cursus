/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michoi <michoi@student.42soul.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 15:50:26 by michoi            #+#    #+#             */
/*   Updated: 2020/11/03 14:51:45 by michoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*result;
	unsigned char	*cmp;

	result = dst;
	cmp = (unsigned char *)src;
	while (n--)
	{
		if (*cmp == (unsigned char)c)
			return (result++);
		*result = *cmp;
		result++;
		cmp++;
	}
	return (0);
}
