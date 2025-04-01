/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mat_translate.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uanglade <uanglade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 20:31:54 by uanglade          #+#    #+#             */
/*   Updated: 2025/03/30 20:36:13 by uanglade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/libftmath.h"

void	ft_mat2_translate(t_vec2 a, t_mat2 mat)
{
	mat[0][1] = a[0];
	mat[1][1] = a[1];
}

void	ft_mat3_translate(t_vec3 a, t_mat3 mat)
{
	mat[0][2] = a[0];
	mat[1][2] = a[1];
	mat[2][2] = a[2];
}

void	ft_mat4_translate(t_vec4 a, t_mat4 mat)
{
	mat[0][3] = a[0];
	mat[1][3] = a[1];
	mat[2][3] = a[2];
	mat[3][3] = a[3];
}
