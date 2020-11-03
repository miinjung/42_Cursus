/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michoi <michoi@student.42soul.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 16:10:09 by michoi            #+#    #+#             */
/*   Updated: 2020/11/03 15:36:10 by michoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*result;
	unsigned char	*tmp_src;
	unsigned char	*cmp;
	int				gap;

	cmp = (unsigned char *)src;
	result = dst;
	if (result > cmp)
	{
		tmp_src = cmp;
		gap = 1;
	}
	else
	{
		tmp_src = cmp + len;
		gap = -1;
	}
	while (len--)
	{
		*result = *cmp;
		result++;
		cmp += gap;
	}
	return (dst);
}
