/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michoi <michoi@student.42soul.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 20:32:19 by michoi            #+#    #+#             */
/*   Updated: 2020/11/06 17:58:41 by michoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	size_t	length;
	size_t	start;
	size_t	end;

	if (s1 == 0 || set == 0)
		return (0);
	length = ft_strlen(s1);
	start = 0;
	end = length;
	while (*(s1 + start) && ft_strchr(set, *(s1 + start)))
		start++;
	while (*(s1 + end - 1) && ft_strchr(set, *(s1 + end - 1)))
		end--;
	if (start > end)
	{
		if (!(result = (char *)malloc(1)))
			return (0);
		*result = 0;
		return (result);
	}
	if (!(result = (char *)malloc(end - start + 1)))
		return (0);
	ft_strlcpy(result, s1 + start, end - start + 1);
	return (result);
}
