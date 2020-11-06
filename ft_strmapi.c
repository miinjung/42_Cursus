/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michoi <michoi@student.42soul.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 15:56:54 by michoi            #+#    #+#             */
/*   Updated: 2020/11/06 16:49:15 by michoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	int		index;
	int		length;

	index = 0;
	length = ft_strlen(s);
	if (!(result = (char *)malloc(length)))
		return (0);
	while (*s)
	{
		result[index] = f(index, (char)s);
		index++;
		s++;
	}
	return (result);
}
