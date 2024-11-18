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
	char	*ret;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[i] && ft_is_in_set(s1[i], set))
		i++;
	if (i == (int)ft_strlen(s1))
		return (calloc(1, 1));
	j = ft_strlen(s1);
	while (j > i && ft_is_in_set(s1[j - 1], set))
		j--;
	ret = (char *)calloc((j - i + 1), sizeof(char));
	if (!ret)
		return (NULL);
	k = -1;
	while (i < j)
		ret[++k] = s1[i++];
	return (ret);
}
