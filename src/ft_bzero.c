/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uanglade <uanglade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 21:32:59 by uanglade          #+#    #+#             */
/*   Updated: 2025/09/05 06:22:29 by uanglade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	ft_bzero(void *s, size_t n)
{
	uint64_t *ptr64;
	uint8_t *ptr;

	ptr = (uint8_t *)s;
	while (((uintptr_t)ptr % 8 != 0) && n > 0) {
		*ptr++ = 0;
		n--;
	}
	ptr64 = (uint64_t *)ptr;
	while (n >= 64) {
		ptr64[0] = 0;
		ptr64[1] = 0;
		ptr64[2] = 0;
		ptr64[3] = 0;
		ptr64[4] = 0;
		ptr64[5] = 0;
		ptr64[6] = 0;
		ptr64[7] = 0;
		ptr64 += 8;
		n -= 64;
	}
	while (n >= 8) {
		*ptr64++ = 0;
		n -= 8;
	}
	ptr = (uint8_t *)ptr64;
	while (n-- > 0)
		*ptr++ = 0;
}
