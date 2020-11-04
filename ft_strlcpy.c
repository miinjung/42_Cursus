/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michoi <michoi@student.42soul.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 18:05:31 by michoi            #+#    #+#             */
/*   Updated: 2020/11/03 21:33:10 by michoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	char	*result;
	size_t	index;

	result = dst;
	index = 0;
	if (dst == 0 && src == 0)
		return (0);
	if (n == 0)
		return (ft_strlen(src));
	while (index < n - 1 && src[index])
	{
		result[index] = src[index];
		index++;
	}
	result[index] = 0;
	return (ft_strlen(src));
}
