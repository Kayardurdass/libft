/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uanglade <uanglade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 23:08:54 by uanglade          #+#    #+#             */
/*   Updated: 2024/10/08 23:19:43 by uanglade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (dst < src && dst < src + len)
	{
		i = len;
		while (--i < len)
		{
			if (dst + i != src + i)
				*((char *)dst + i) = *((char *)src + i);
		}
	}
	else
	{
		i = -1;
		while (++i < len)
		{
			if (dst + i != src + i)
				*((char *)dst + i) = *((char *)src + i);
		}
	}
	return (dst);
}
