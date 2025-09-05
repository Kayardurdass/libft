/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset32.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uanglade <uanglade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 09:32:04 by uanglade          #+#    #+#             */
/*   Updated: 2025/05/19 10:17:32 by uanglade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset32(void *dst, int32_t a, size_t len)
{
	int32_t	*dst_cursor;

	if (!dst)
		return (dst);
	dst_cursor = dst;
	while (len)
	{
		*(int32_t*)dst_cursor = a;
		len--;
		dst_cursor++;
	}
	return (dst);
}
