/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uanglade <uanglade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 05:52:05 by uanglade          #+#    #+#             */
/*   Updated: 2024/11/07 06:07:41 by uanglade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_in_set(char c, char const *set)
{
	int	i;

	i = -1;
	while (set[++i])
	{
		if (set[i] == c)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	int		len;
	char	*ret;

	i = -1;
	if (!s1 || !set)
		return (NULL);
	while (s1[++i] && ft_is_in_set(s1[i], set))
		len += ft_is_in_set(s1[i], set);
	j = ft_strlen(s1);
	while (--j >= 0 && ft_is_in_set(s1[j], set))
		len += ft_is_in_set(s1[j], set);
	ret = (char *)calloc(sizeof(char),  (ft_strlen(s1) - len + 1));
	if (!ret)
		return (NULL);
	k = -1;
	while (i < j && s1[i])
		ret[++k] = s1[i++];
	return (ret);
}

