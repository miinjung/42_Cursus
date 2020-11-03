/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michoi <michoi@student.42soul.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 17:10:46 by michoi            #+#    #+#             */
/*   Updated: 2020/11/03 15:58:55 by michoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		result;

	result = 0;
	while (*str)
	{
		if (*str < '0' || *str > '9')
			break ;
		result *= 10;
		result += (*str - '0');
		str++;
	}
	return (result);
}
