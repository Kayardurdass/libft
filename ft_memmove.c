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
	void	*tmp;

	tmp = malloc(len);
	if (!tmp)
		return NULL;
	i = -1;
	while (++i < len)
		*(char *)(tmp + i) = *(char *)(src + i);
	i = -1;
	while (++i < len)
		*(char *)(dst + i) = *(char *)(tmp + i);
	free(tmp);
	return (dst);
}
