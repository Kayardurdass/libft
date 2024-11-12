/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uanglade <uanglade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 05:10:09 by uanglade          #+#    #+#             */
/*   Updated: 2024/11/07 05:29:34 by uanglade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void		*ret;
	long long	overflow_check;

	overflow_check = nmemb * size;
	if (!size || !nmemb)
		return (malloc(1));
	if ( nmemb != overflow_check / size || nmemb <= 0 || size <= 0)
		return (NULL);
	ret = malloc(nmemb * size);
	if (!ret)
		return (NULL);
	ft_bzero(ret, nmemb);
	return (ret);
}
