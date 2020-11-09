/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michoi <michoi@student.42soul.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 15:33:27 by michoi            #+#    #+#             */
/*   Updated: 2020/11/09 21:04:40 by michoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		check_size(int n)
{
	int		result;

	result = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		result++;
	while (n != 0)
	{
		n /= 10;
		result++;
	}
	return (result);
}

char	*ft_itoa(int n)
{
	char			*result;
	unsigned int	temp;
	int				index;

	index = check_size(n);
	if (!(result = (char *)malloc(index + 1)))
		return (0);
	if (n < 0)
	{
		result[0] = '-';
		temp = -n;
	}
	else
		temp = n;
	result[index--] = 0;
	result[index] = '0';
	while (temp > 0)
	{
		result[index--] = temp % 10 + '0';
		temp /= 10;
	}
	return (result);
}
