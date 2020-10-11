/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michoi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 19:12:38 by michoi            #+#    #+#             */
/*   Updated: 2020/10/11 19:19:17 by michoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
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
