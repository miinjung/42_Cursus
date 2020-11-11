/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michoi <michoi@student.42soul.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 21:09:22 by michoi            #+#    #+#             */
/*   Updated: 2020/11/11 19:29:58 by michoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**free_all(char **result, size_t index)
{
	size_t	current;

	current = 0;
	while (current < index)
		free(*(result + current));
	free(result);
	return (0);
}

char		**ft_split(char const *s, char c)
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
				return (free_all(result, index));
			ft_strlcpy(*(result + index++), s, end + 1);
		}
		s += end;
	}
	return (result);
}
