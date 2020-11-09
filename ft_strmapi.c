/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michoi <michoi@student.42soul.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 15:56:54 by michoi            #+#    #+#             */
/*   Updated: 2020/11/09 20:23:01 by michoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*result;
	char			*temp;
	unsigned int	index;
	int				length;

	index = 0;
	temp = (char *)s;
	if (s == 0)
		return (0);
	length = ft_strlen(s);
	if (!(result = (char *)malloc(length + 1)))
		return (0);
	while (*s)
	{
		result[index] = f(index, *(temp + index));
		index++;
		s++;
	}
	result[index] = 0;
	return (result);
}
