/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michoi <michoi@student.42soul.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 17:32:43 by michoi            #+#    #+#             */
/*   Updated: 2020/11/02 21:35:52 by michoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*result;

	if (!(result = (void *)malloc(count * size)))
		return (0);
	memset(result, count, size);
	return (result);
}
