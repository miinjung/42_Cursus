/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michoi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 16:10:09 by michoi            #+#    #+#             */
/*   Updated: 2020/10/11 16:48:11 by michoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void *ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*result;
	unsigned char	*tmp_src;
	int				gap;

	result = src;
	if(dst > src)
	{
		tmp_src = src;
			gap = 1;
	}
	else
	{
		tmp_src = src + len;
		gap = -1;
	}
	while(len--)
	{
		*result = *src;
		result++;
		src += gap;
	}
	return dst
}
