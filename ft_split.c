/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michoi <michoi@student.42soul.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 21:09:22 by michoi            #+#    #+#             */
/*   Updated: 2020/11/09 21:32:53 by michoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	index;
	size_t	end;

	if (s == 0)
		return (0);
	if (!(result = (char **)ft_calloc(ft_strlen(s) + 1, sizeof(char *))))
		return (0);
	index = 0;
	while (*s)
	{
		end = 0;
		while (*s && *s == c)
			s++;
		while (*(s + end) && *(s + end) != c)
			end++;
		if (end != 0)
		{
			if (!(*(result + index) = (char *)malloc(end + 1)))
				return (0);
			ft_strlcpy(*(result + index++), s, end + 1);
		}
		s += end;
	}
	return (result);
}
