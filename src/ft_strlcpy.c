/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michoi <michoi@student.42soul.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 18:05:31 by michoi            #+#    #+#             */
/*   Updated: 2020/11/03 14:44:07 by michoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t	length;

	length = 0;
	while (*dst)
	{
		if (n > 0)
			*dst = *src;
		else
			*dst = 0;
		dst++;
		src++;
		n--;
		length++;
	}
	if (length > n)
		return (n++);
	else
		return (length++);
}
