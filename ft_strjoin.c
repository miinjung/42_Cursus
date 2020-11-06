/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michoi <michoi@student.42soul.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 20:19:29 by michoi            #+#    #+#             */
/*   Updated: 2020/11/06 17:11:56 by michoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	length_1;
	size_t	length_2;

	if (s1 == 0 || s2 == 0)
		return (0);
	length_1 = ft_strlen(s1);
	length_2 = ft_strlen(s2);
	if (!(result = (char *)malloc(length_1 + length_2 + 1)))
		return (0);
	ft_strlcpy(result, s1, length_1 + 1);
	ft_strlcat(result, s2, length_2 + length_1 + 1);
	return (result);
}
