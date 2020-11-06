/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michoi <michoi@student.42soul.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 16:30:02 by michoi            #+#    #+#             */
/*   Updated: 2020/11/06 17:04:21 by michoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	big_index;
	size_t	little_index;

	big_index = 0;
	little_index = 0;
	if (*little == 0)
		return ((char *)big);
	while (big_index + little_index < len && big[big_index + little_index])
	{
		if (big[big_index + little_index] == little[little_index])
			little_index++;
		else
		{
			big_index++;
			little_index = 0;
		}
		if (little[little_index] == 0)
			return ((char *)big + big_index);
	}
	return (0);
}
