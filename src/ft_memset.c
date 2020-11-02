/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michoi <michoi@student.42soul.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 14:17:36 by michoi            #+#    #+#             */
/*   Updated: 2020/11/02 21:18:10 by michoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_header.h"

void	*memset(void *ptr, int value, size_t len)
{
	unsigned char	*result;

	result = (unsigned char *)ptr;
	while (len--)
		*result++ = value;
	return (ptr);
}
