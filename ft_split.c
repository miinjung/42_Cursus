/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michoi <michoi@student.42soul.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 21:09:22 by michoi            #+#    #+#             */
/*   Updated: 2020/11/06 15:33:35 by michoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	length;
	size_t	index_1;
	size_t	index_2;

	length = ft_strlen(s);
	index_1 = 0;
	if (!(result = (char **)malloc(length + 1)))
		return (0);
	while (index_1 < length + 1)
	{
		if (!(*(result + index_1++) = (char *)malloc(length + 1)))
			return (0);
	}
	index_1 = 0;
	while (*s)
	{
		index_2 = 0;
		while (*s != c)
			result[index_1][index_2++] = *s++;
		s++;
		index_1++;
	}
	return (result);
}
