/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset64.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uanglade <uanglade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 09:32:04 by uanglade          #+#    #+#             */
/*   Updated: 2025/05/19 09:37:38 by uanglade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset64(void *dst, int64_t a, size_t len)
{
	int64_t	*dst_cursor;

	if (!dst)
		return (dst);
	dst_cursor = dst;
	while (len)
	{
		*(int64_t*)dst_cursor = a;
		len--;
		dst_cursor++;
	}
	return (dst);
}
