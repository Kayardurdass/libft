/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uanglade <uanglade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 06:08:17 by uanglade          #+#    #+#             */
/*   Updated: 2024/11/13 02:32:19 by uanglade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_getlen(char const *s, char c)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
		{
			while(s[i] != c && s[i])
				i++;
			len++;
		}
	}
	return (len);
}

int	ft_getnextlen(char const *s, char c)
{
	int	i;
	
	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**ret;

	if (!s)
		return (NULL);
	ret = (char **)calloc((ft_getlen(s, c) + 1), sizeof(char*));
	if (!ret)
		return (ret);
	i = -1;
	j = 0;
	while (s[j] == c && s[j])
		j++;
	while (++i < ft_getlen(s, c))
	{
		ret[i] = ft_strndup(s + j, ft_getnextlen(s + j, c));
		if (!ret[i])
			return (NULL);
		j += ft_getnextlen(s + j, c);
		while (s[j] == c)
			j++;
	}
	return (ret);
}
