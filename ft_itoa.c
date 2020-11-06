/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michoi <michoi@student.42soul.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 15:33:27 by michoi            #+#    #+#             */
/*   Updated: 2020/11/06 16:35:59 by michoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char			*result;
	unsigned int	temp;
	int				index;
	int				seperator;

	index = 0;
	seperator = 1000000000;
	if (!(result = (char *)malloc(12)))
		return (0);
	if (n < 0)
	{
		result[index++] = '-';
		temp = n * (-1);
	}
	else
		temp = n;
	while (seperator == 0)
	{
		if (seperator < n)
			result[index++] = (temp / seperator) % 10;
		temp /= seperator;
		seperator /= 10;
	}
	return (result);
}
