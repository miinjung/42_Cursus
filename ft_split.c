/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michoi <michoi@student.42soul.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 21:09:22 by michoi            #+#    #+#             */
/*   Updated: 2020/11/04 21:41:33 by michoi           ###   ########.fr       */
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
	if (!(result = (char **)malloc(length + 1)));
		return (0);
	while (index_1 < length + 1)
	{
		if(!(*(result + index_1) = (char *)malloc(length + 1)))
			return (0);
	}
	index_1 = 0;
	while (*s)
	{
		while (*s != c)
	}
	return (result);
}
