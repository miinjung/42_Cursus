/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michoi <michoi@student.42soul.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 17:39:18 by michoi            #+#    #+#             */
/*   Updated: 2020/11/02 21:19:04 by michoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_header.h"

char	*ft_strdup(const char *s)
{
	char	*result;
	size_t	len;

	len = 0;
	while (*(s + len))
		len++;
	result = (char *)malloc(len);
	while (*s)
	{
		*result = *s;
		result++;
		s++;
	}
	return (result);
}
