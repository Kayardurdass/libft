/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec_scale.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uanglade <uanglade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 15:21:12 by uanglade          #+#    #+#             */
/*   Updated: 2025/03/30 15:23:45 by uanglade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/libftmath.h"

void	ft_vec2_scale(t_vec2 a, float s, t_vec2 dest)
{
	dest[0] = a[0] * s;
	dest[1] = a[1] * s;
}

void	ft_vec3_scale(t_vec3 a, float s, t_vec3 dest)
{
	dest[0] = a[0] * s;
	dest[1] = a[1] * s;
	dest[2] = a[2] * s;
}

void	ft_vec4_scale(t_vec4 a, float s, t_vec4 dest)
{
	dest[0] = a[0] * s;
	dest[1] = a[1] * s;
	dest[2] = a[2] * s;
	dest[3] = a[3] * s;
}
