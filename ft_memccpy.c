/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michoi <michoi@student.42soul.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 15:50:26 by michoi            #+#    #+#             */
/*   Updated: 2020/11/03 17:31:54 by michoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*result;
	unsigned char	*cmp;
	size_t			index;

	result = dst;
	cmp = (unsigned char *)src;
	index = 0;
	while (index < n)
	{
		if (*(cmp + index) == (unsigned char)c)
		{
			ft_memcpy(dst, src, index + 1);
			return (dst + index + 1);
		}
		index++;
	}
	ft_memcpy(dst, src, n);
	return (0);
}
