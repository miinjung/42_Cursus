/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michoi <michoi@student.42soul.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 17:02:33 by michoi            #+#    #+#             */
/*   Updated: 2020/11/03 18:25:42 by michoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *str1, const char *str2, size_t count)
{
	unsigned char	*str_1;
	unsigned char	*str_2;

	str_1 = (unsigned char *)str1;
	str_2 = (unsigned char *)str2;
	while (count--)
	{
		if (*str_1 != *str_2 || *str_2 == 0 || *str_1 == 0)
			return (*str_1 - *str_2);
		str_1++;
		str_2++;
	}
	return (0);
}
