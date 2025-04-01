/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mat_identity.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uanglade <uanglade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 19:22:08 by uanglade          #+#    #+#             */
/*   Updated: 2025/03/30 19:42:48 by uanglade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/libftmath.h"

void	ft_mat2_identity(t_mat2 dest)
{
	dest[0][0] = 1;
	dest[1][1] = 1;
	dest[0][1] = 1;
	dest[1][0] = 0;
}

void	ft_mat3_identity(t_mat3 dest)
{
	dest[0][0] = 1;
	dest[1][1] = 1;
	dest[2][2] = 1;
	dest[0][1] = 0;
	dest[0][2] = 0;
	dest[1][0] = 0;
	dest[1][2] = 0;
	dest[2][0] = 0;
	dest[2][1] = 0;
}

void	ft_mat4_identity(t_mat4 dest)
{
	dest[0][0] = 1;
	dest[1][1] = 1;
	dest[2][2] = 1;
	dest[3][3] = 1;
	dest[0][1] = 0;
	dest[0][2] = 0;
	dest[0][3] = 0;
	dest[1][0] = 0;
	dest[1][2] = 0;
	dest[1][3] = 0;
	dest[2][0] = 0;
	dest[2][1] = 0;
	dest[2][3] = 0;
	dest[3][0] = 0;
	dest[3][1] = 0;
	dest[3][2] = 0;
}
