/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec_copy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uanglade <uanglade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 14:56:03 by uanglade          #+#    #+#             */
/*   Updated: 2025/03/30 14:58:22 by uanglade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/libftmath.h"

void	ft_vec2_copy(t_vec2 a, t_vec2 dest)
{
	dest[0] = a[0];
	dest[1] = a[1];
}

void	ft_vec3_copy(t_vec3 a, t_vec3 dest)
{
	dest[0] = a[0];
	dest[1] = a[1];
	dest[2] = a[2];
}

void	ft_vec4_copy(t_vec4 a, t_vec4 dest)
{
	dest[0] = a[0];
	dest[1] = a[1];
	dest[2] = a[2];
	dest[3] = a[3];
}
