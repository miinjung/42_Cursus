/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michoi <michoi@student.42soul.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 19:12:38 by michoi            #+#    #+#             */
/*   Updated: 2020/11/03 21:52:44 by michoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_length;
	size_t	src_length;

	dst_length = ft_strlen(dst);
	src_length = ft_strlen(src);
	if (dstsize == 0)
		return (src_length);
	else if (dstsize <= dst_length)
		return (dstsize + src_length);
	else
	{
		ft_strlcpy(dst + dst_length, src, dstsize - dst_length);
		return (dst_length + src_length);
	}
}
