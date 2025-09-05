/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uanglade <uanglade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 21:26:20 by uanglade          #+#    #+#             */
/*   Updated: 2025/09/05 06:24:48 by uanglade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	uint8_t byte;
	uint64_t word;
	uint8_t *ptr;
	uint64_t *word_ptr;

	byte = (uint8_t)c;
	word = byte;
	word |= word << 8;
	word |= word << 16;
	word |= word << 32;
	ptr = (uint8_t *)b;
	while (len > 0 && ((uintptr_t)ptr & 7)) {
		*ptr++ = byte;
		len--;
	}
	word_ptr = (uint64_t *)ptr;
	while (len >= 8) {
		*word_ptr++ = word;
		len -= 8;
	}
	ptr = (uint8_t *)word_ptr;
	while (len--) {
		*ptr++ = byte;
	}
	return (b);
}
