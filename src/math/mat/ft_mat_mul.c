/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mat_mul.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uanglade <uanglade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 19:52:54 by uanglade          #+#    #+#             */
/*   Updated: 2025/03/30 21:14:10 by uanglade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/libftmath.h"

void	ft_mat2_mul(t_mat2 a, t_mat2 b, t_mat2 dest)
{
	dest[0][0] = a[0][0] * b[0][0] + a[0][1] * b[1][0];
	dest[0][1] = a[0][0] * b[1][0] + a[0][1] * b[1][1];
	dest[1][0] = a[1][0] * b[0][0] + a[1][1] * b[1][0];
	dest[1][1] = a[1][0] * b[0][1] + a[1][1] * b[1][1];
}

void	ft_mat3_mul(t_mat3 a, t_mat3 b, t_mat3 dest)
{
	dest[0][0] = a[0][0] * b[0][0] + a[0][1] * b[1][0] + a[0][2] * b[2][0];
	dest[0][1] = a[0][0] * b[0][1] + a[0][1] * b[1][1] + a[0][2] * b[2][1];
	dest[0][2] = a[0][0] * b[0][2] + a[0][1] * b[1][2] + a[0][2] * b[2][2];
	dest[1][0] = a[1][0] * b[0][0] + a[1][1] * b[1][0] + a[1][2] * b[2][0];
	dest[1][1] = a[1][0] * b[0][1] + a[1][1] * b[1][1] + a[1][2] * b[2][1];
	dest[1][2] = a[1][0] * b[0][2] + a[1][1] * b[1][2] + a[1][2] * b[2][2];
	dest[2][0] = a[2][0] * b[0][0] + a[2][1] * b[1][0] + a[2][2] * b[2][0];
	dest[2][1] = a[2][0] * b[0][1] + a[2][1] * b[1][1] + a[2][2] * b[2][1];
	dest[2][2] = a[2][0] * b[0][2] + a[2][1] * b[1][2] + a[2][2] * b[2][2];
}

static void	ft_mat4_mul2(t_mat4 a, t_mat4 b, t_mat4 dest)
{
	dest[2][0] = a[2][0] * b[0][0] + a[2][1] * b[1][0] + a[2][2] * b[2][0]
		+ a[2][3] * b[3][0];
	dest[2][1] = a[2][0] * b[0][1] + a[2][1] * b[1][1] + a[2][2] * b[2][1]
		+ a[2][3] * b[3][1];
	dest[2][2] = a[2][0] * b[0][2] + a[2][1] * b[1][2] + a[2][2] * b[2][2]
		+ a[2][3] * b[3][2];
	dest[2][3] = a[2][0] * b[0][3] + a[2][1] * b[1][3] + a[2][2] * b[2][3]
		+ a[2][3] * b[3][3];
	dest[3][0] = a[3][0] * b[0][0] + a[3][1] * b[1][0] + a[3][2] * b[2][0]
		+ a[3][3] * b[3][0];
	dest[3][1] = a[3][0] * b[0][1] + a[3][1] * b[1][1] + a[3][2] * b[2][1]
		+ a[3][3] * b[3][1];
	dest[3][2] = a[3][0] * b[0][2] + a[3][1] * b[1][2] + a[3][2] * b[2][2]
		+ a[3][3] * b[3][2];
	dest[3][3] = a[3][0] * b[0][3] + a[3][1] * b[1][3] + a[3][2] * b[2][3]
		+ a[3][3] * b[3][3];
}

void	ft_mat4_mul(t_mat4 a, t_mat4 b, t_mat4 dest)
{
	dest[0][0] = a[0][0] * b[0][0] + a[0][1] * b[1][0] + a[0][2] * b[2][0]
		+ a[0][3] * b[3][0];
	dest[0][1] = a[0][0] * b[0][1] + a[0][1] * b[1][1] + a[0][2] * b[2][1]
		+ a[0][3] * b[3][1];
	dest[0][2] = a[0][0] * b[0][2] + a[0][1] * b[1][2] + a[0][2] * b[2][2]
		+ a[0][3] * b[3][2];
	dest[0][3] = a[0][0] * b[0][3] + a[0][1] * b[1][3] + a[0][2] * b[2][3]
		+ a[0][3] * b[3][3];
	dest[1][0] = a[1][0] * b[0][0] + a[1][1] * b[1][0] + a[1][2] * b[2][0]
		+ a[1][3] * b[3][0];
	dest[1][1] = a[1][0] * b[0][1] + a[1][1] * b[1][1] + a[1][2] * b[2][1]
		+ a[1][3] * b[3][1];
	dest[1][2] = a[1][0] * b[0][2] + a[1][1] * b[1][2] + a[1][2] * b[2][2]
		+ a[1][3] * b[3][2];
	dest[1][3] = a[1][0] * b[0][3] + a[1][1] * b[1][3] + a[1][2] * b[2][3]
		+ a[1][3] * b[3][3];
	ft_mat4_mul2(a, b, dest);
}
