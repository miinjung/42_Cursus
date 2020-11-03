/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michoi <michoi@student.42soul.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 18:21:53 by michoi            #+#    #+#             */
/*   Updated: 2020/11/03 16:00:21 by michoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*result;
	unsigned char	*cmp;

	result = dst;
	cmp = (unsigned char *)src;
	while (n--)
	{
		*result = *cmp;
		result++;
		cmp++;
	}
	return (dst);
}
