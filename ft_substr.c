/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uanglade <uanglade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 05:30:02 by uanglade          #+#    #+#             */
/*   Updated: 2024/11/07 05:43:46 by uanglade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int		i;
	unsigned int		j;
	char				*ret;
	
	if (!s)
		return (NULL);
	if (len <= 0)
		return (calloc(1, 1));
	if (ft_strlen(s) < start)
		return (calloc(1, 1));
	if (start + len > ft_strlen(s) - start)
		ret = (char *)calloc(sizeof(char), (ft_strlen(s) - start + 1));
	else
		ret = (char *)calloc(sizeof(char), start + len);
	if (!ret)
		return (NULL);
	i = start;
	j = -1;
	while (i < start + len && s[i])
		ret[++j] = s[i++];
	return (ret);
}
