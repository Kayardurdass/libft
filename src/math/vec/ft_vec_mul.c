/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec_mul.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uanglade <uanglade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 15:02:23 by uanglade          #+#    #+#             */
/*   Updated: 2025/03/30 15:08:37 by uanglade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/libftmath.h"

void	ft_vec2_mul(t_vec2 a, t_vec2 b, t_vec2 dest)
{
	dest[0] = a[0] * b[0];
	dest[1] = a[1] * b[1];
}

void	ft_vec3_mul(t_vec3 a, t_vec3 b, t_vec3 dest)
{
	dest[0] = a[0] * b[0];
	dest[1] = a[1] * b[1];
	dest[2] = a[2] * a[2];
}

void	ft_vec4_mul(t_vec4 a, t_vec4 b, t_vec4 dest)
{
	dest[0] = a[0] * b[0];
	dest[1] = a[1] * b[1];
	dest[2] = a[2] * b[2];
	dest[3] = a[3] * b[3];
}
