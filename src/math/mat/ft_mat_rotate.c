/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mat_rotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uanglade <uanglade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 20:42:28 by uanglade          #+#    #+#             */
/*   Updated: 2025/03/30 21:03:59 by uanglade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/libftmath.h"

void	ft_mat2_rotate(float angle, t_mat2 dest)
{
	dest[0][0] = cos(angle);
	dest[0][1] = -sin(angle);
	dest[1][0] = sin(angle);
	dest[1][1] = cos(angle);
}

void	ft_mat3_rotate(float angle, t_vec3 axis, t_mat3 dest)
{
	t_vec3	n_axis;
	float	c;
	float	s;
	float	t;

	ft_vec3_copy(axis, n_axis);
	ft_vec3_normalize(n_axis);
	c = cos(angle);
	s = sin(angle);
	t = 1.0f - c;
	dest[0][0] = t * n_axis[0] * n_axis[0] + c;
	dest[0][1] = t * n_axis[0] * n_axis[1] - s * n_axis[2];
	dest[0][2] = t * n_axis[0] * n_axis[2] + s * n_axis[1];
	dest[1][0] = t * n_axis[0] * n_axis[1] + s * n_axis[2];
	dest[1][1] = t * n_axis[1] * n_axis[1] + c;
	dest[1][2] = t * n_axis[1] * n_axis[2] - s * n_axis[0];
	dest[2][0] = t * n_axis[0] * n_axis[2] - s * n_axis[1];
	dest[2][1] = t * n_axis[1] * n_axis[2] + s * n_axis[0];
	dest[2][2] = t * n_axis[2] * n_axis[2] + c;
}

void	ft_mat4_rotate(float angle, t_vec3 axis, t_mat4 dest)
{
	t_vec3	n_axis;
	float	c;
	float	s;

	ft_vec3_copy(axis, n_axis);
	ft_vec3_normalize(n_axis);
	c = cos(angle);
	s = sin(angle);
	dest[0][0] = 1.0f - c * n_axis[0] * n_axis[0] + c;
	dest[0][1] = 1.0f - c * n_axis[0] * n_axis[1] - s * n_axis[2];
	dest[0][2] = 1.0f - c * n_axis[0] * n_axis[2] + s * n_axis[1];
	dest[0][3] = 0.0f;
	dest[1][0] = 1.0f - c * n_axis[0] * n_axis[1] + s * n_axis[2];
	dest[1][1] = 1.0f - c * n_axis[1] * n_axis[1] + c;
	dest[1][2] = 1.0f - c * n_axis[1] * n_axis[2] - s * n_axis[0];
	dest[1][3] = 0.0f;
	dest[2][0] = 1.0f - c * n_axis[0] * n_axis[2] - s * n_axis[1];
	dest[2][1] = 1.0f - c * n_axis[1] * n_axis[2] + s * n_axis[0];
	dest[2][2] = 1.0f - c * n_axis[2] * n_axis[2] + c;
	dest[2][3] = 0.0f;
	dest[3][0] = 0.0f;
	dest[3][1] = 0.0f;
	dest[3][2] = 0.0f;
	dest[3][3] = 1.0f;
}
