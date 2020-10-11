/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michoi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 17:48:22 by michoi            #+#    #+#             */
/*   Updated: 2020/10/11 18:01:38 by michoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*temp_1;
	unsigned char	*temp_2;

	temp_1 = s1;
	temp_2 = s2;
	while(n--)
	{
		if(temp_1 > temp_2)
			return (1);
		else if(temp_1 < temp_2)
			return (-1);
		temp_1++;
		temp_2++;
	}
	return (0);
}
