/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michoi <michoi@student.42soul.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 16:10:09 by michoi            #+#    #+#             */
/*   Updated: 2020/11/03 17:19:32 by michoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*result;
	unsigned char	*cmp;

	cmp = (unsigned char *)src;
	result = dst;
	if (cmp == 0 && result == 0)
		return (0);
	if (result < cmp)
	{
		while (len--)
		{
			*result = *cmp;
			cmp++;
			result++;
		}
	}
	else
	{
		while (len)
		{
			*(result + len - 1) = *(cmp + len - 1);
			len--;
		}
	}
	return (dst);
}
