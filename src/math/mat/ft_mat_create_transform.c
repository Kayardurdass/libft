/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mat_create.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uanglade <uanglade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 20:36:36 by uanglade          #+#    #+#             */
/*   Updated: 2025/03/30 21:12:53 by uanglade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/libftmath.h"

void	ft_mat2_create_transform(t_vec2 pos, t_vec2 scale, float rot, t_mat2 dest)
{
	t_mat2	pos_m;
	t_mat2	scale_m;
	t_mat2	rot_m;

	ft_mat2_translate(pos, pos_m);
	ft_mat2_scale(scale, scale_m);
	ft_mat2_rot(rot, rot_m);
	ft_mat2_mul(pos_m, scale_m, dest);
	ft_mat2_mul(dest, rot_m);
}

void	ft_mat3_create_transform(t_vec3 pos, t_vec3 scale, float angle, t_vec3 axis, t_mat3 dest)
{
	t_mat3	pos_m;
	t_mat3	scale_m;
	t_mat3	rot_m;

	ft_mat3_translate(pos, pos_m);
	ft_mat3_scale(scale, scale_m);
	ft_mat3_rot(angle, axis, rot_m);
	ft_mat3_mul(pos_m, scale_m, dest);
	ft_mat3_mul(dest, rot_m);
}

void	ft_mat4_create_transform(t_vec4 pos, t_vec4 scale, float angle, t_vec3 axis, t_mat4 dest)
{
	t_mat4	pos_m;
	t_mat4	scale_m;
	t_mat4	rot_m;

	ft_mat4_translate(pos, pos_m);
	ft_mat4_scale(scale, scale_m);
	ft_mat4_rot(angle, axis, rot_m);
	ft_mat4_mul(pos_m, scale_m, dest);
	ft_mat4_mul(dest, rot_m);
}
