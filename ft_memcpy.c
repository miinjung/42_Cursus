/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michoi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 15:38:10 by michoi            #+#    #+#             */
/*   Updated: 2020/10/11 16:35:48 by michoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char	*result;

	result = dst;
	while(n--)
	{
		*result = *src;
		result++;
		src++;
	}
	return (dst)
}
