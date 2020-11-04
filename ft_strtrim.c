/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michoi <michoi@student.42soul.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 20:32:19 by michoi            #+#    #+#             */
/*   Updated: 2020/11/04 21:36:08 by michoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	size_t	length_1;
	size_t	length_2;
	size_t	index;

	length_1 = ft_strlen(s1);
	length_2 = ft_strlen(set);
	index = 0;
	if (!(result = (char *)malloc(length_1 + 1)))
		return (0);
	while (*s1)
	{
		if (ft_strncmp(s1, set, length_2) == 0)
			s1 += length_2;
		else
		{
			*(result + index) = *s1;
			index++;
			s1++;
		}
	}
	return (result);
}
