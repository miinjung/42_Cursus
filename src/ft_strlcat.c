/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michoi <michoi@student.42soul.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 19:12:38 by michoi            #+#    #+#             */
/*   Updated: 2020/11/03 14:44:03 by michoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	int	length;

	length = 0;
	while (dstsize-- && *dst)
	{
		dst++;
	}
	while (*src)
	{
		*dst = *src;
		dst++;
		src++;
	}
	return (length);
}
