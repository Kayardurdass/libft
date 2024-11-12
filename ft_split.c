/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uanglade <uanglade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 06:08:17 by uanglade          #+#    #+#             */
/*   Updated: 2024/11/07 06:27:21 by uanglade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

size_t	ft_getlen(char const *s, char c)
{
	int	i;
	int	len;

	i = -1;
	len = 1;
	while (s[++i])
	{
		if (s[i] == c)
		{
			while (s[i] == c)
				i++;
			len++;
		}
	}
	return (len);
}

size_t	ft_getnextlen(char const *s, char c)
{
	int	i;
	
	i = 0;
	while (s[i] || s[i] == c)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**ret;

	ret = (char **)malloc(sizeof(char*) * (ft_getlen(s, c) + 1));
	if (!ret)
		return (ret);
	ret[ft_getlen(s, c) + 1] = 0;
	i = -1;
	j = 0;
	while (ret[++i])
	{
		ret[i] = (char *)malloc(sizeof(char) * (ft_getnextlen(s + j, c) + 1));
		ft_strlcpy(ret[i], s + j, ft_getnextlen(s + j, c) + 1);
		j = ft_getnextlen(s + j, c);
		while (s[j] == c && s[j])
			j++;
	}
	return (ret);
}
