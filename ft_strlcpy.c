/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michoi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 18:05:31 by michoi            #+#    #+#             */
/*   Updated: 2020/10/11 19:12:28 by michoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t ft_strlcpy(char *restrict dst, const char *restrict src, size_t n)
{
	size_t	length;

	length = 0;
	while(*dst)
	{
		if(n > 0)
			*dst = *src;
		else
			*dst = 0;
		dst++;
		src++;
		n--;
		length++;
	}
	if(length > n)
		return (n++);
	else 
		return (length++); 
}
