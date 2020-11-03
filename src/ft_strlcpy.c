/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michoi <michoi@student.42soul.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 18:05:31 by michoi            #+#    #+#             */
/*   Updated: 2020/11/03 19:25:29 by michoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	char	*result;
	size_t	length;

	result = dst;
	if (n == 0 || (dst == 0 && src == 0))
		return (0);
	length = ft_strlen(src);
	while (--n && *src)
	{
		*result = *src;
		src++;
		result++;
	}
	*result = 0;
	if (length < n)
		return (length);
	else
		return (n - 1);
}
