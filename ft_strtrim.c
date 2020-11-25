/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michoi <michoi@student.42soul.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 20:32:19 by michoi            #+#    #+#             */
/*   Updated: 2020/11/25 15:45:20 by michoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	int		length;
	int		start;
	int		end;

	if (s1 == 0 || set == 0)
		return (0);
	length = ft_strlen(s1);
	start = 0;
	end = length;
	while (*(s1 + start) && ft_strchr(set, *(s1 + start)))
		start++;
	while (end - 1 && ft_strchr(set, *(s1 + end - 1)))
		end--;
	if (start >= end)
		return (ft_strdup(""));
	if (!(result = (char *)malloc(end - start + 1)))
		return (0);
	ft_strlcpy(result, s1 + start, end - start + 1);
	return (result);
}
