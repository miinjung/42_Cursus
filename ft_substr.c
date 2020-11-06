/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michoi <michoi@student.42soul.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 20:01:02 by michoi            #+#    #+#             */
/*   Updated: 2020/11/06 17:12:54 by michoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;

	if (s == 0)
		return (0);
	if (!(result = (char *)malloc(len + 1)))
		return (0);
	if (start < ft_strlen(s))
		ft_strlcpy(result, s + start, len + 1);
	return (result);
}
