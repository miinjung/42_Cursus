/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michoi <michoi@student.42soul.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 16:22:07 by michoi            #+#    #+#             */
/*   Updated: 2020/11/03 18:06:46 by michoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*temp;

	temp = (char *)s;
	while (*temp)
		temp++;
	while (temp != s - 1)
	{
		if (*temp == (char)c)
			return (temp);
		if (temp == s)
			break ;
		temp--;
	}
	return (0);
}
