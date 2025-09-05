/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uanglade <uanglade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 06:48:17 by uanglade          #+#    #+#             */
/*   Updated: 2025/09/05 06:49:53 by uanglade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void const *ptr, size_t old_nmemb, size_t new_nmemb,
					size_t size)
{
	void	*ret;

	ret = ft_calloc(new_nmemb, size);
	if (!ret)
		return (ft_free(&ptr), NULL);
	if (old_nmemb < new_nmemb)
		ft_memcpy(ret, ptr, old_nmemb * size);
	else
		ft_memcpy(ret, ptr, new_nmemb * size);
	ft_free(&ptr);
	return (ret);
}
