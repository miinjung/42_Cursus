/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michoi <michoi@student.42soul.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 17:02:33 by michoi            #+#    #+#             */
/*   Updated: 2020/11/03 15:56:58 by michoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *str1, const char *str2, size_t count)
{
	size_t	index;

	index = 0;
	while (index < count)
	{
		if (*(str1 + index) > *(str2 + index) || *(str2 + index) == 0)
			return (1);
		if (*(str1 + index) < *(str2 + index) || *(str1 + index) == 0)
			return (-1);
		index++;
	}
	return (0);
}
