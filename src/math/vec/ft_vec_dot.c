/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec_dot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uanglade <uanglade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 15:08:48 by uanglade          #+#    #+#             */
/*   Updated: 2025/03/30 19:19:24 by uanglade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/libftmath.h"

float	ft_vec2_dot(t_vec2 a, t_vec2 b)
{
	return ((a[0] * b[0]) + (a[1] * b[1]));
}

float	ft_vec3_dot(t_vec3 a, t_vec3 b)
{
	return ((a[0] * b[0]) + (a[1] * b[1]) + (a[2] * b[2]));
}

float	ft_vec4_dot(t_vec4 a, t_vec4 b)
{
	return ((a[0] * b[0]) + (a[1] * b[1]) + (a[2] * b[2]) + (a[3] + b[3]));
}
