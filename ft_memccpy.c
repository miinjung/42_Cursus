/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michoi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 15:50:26 by michoi            #+#    #+#             */
/*   Updated: 2020/10/11 16:09:57 by michoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
	unsigned char	*result;
	
	result = dst;
	while(n--)
	{
		if(src == c)
			return result++;
		*result = *src;
		result++;
		src++;
	}
	return NULL;
}
