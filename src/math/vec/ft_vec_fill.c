/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec_fill.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uanglade <uanglade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 14:20:11 by uanglade          #+#    #+#             */
/*   Updated: 2025/03/30 19:39:46 by uanglade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/libftmath.h"

void	ft_vec2_fill(float a, t_vec2 dest)
{
	dest[0] = a;
	dest[1] = a;
}

void	ft_vec3_fill(float a, t_vec3 dest)
{
	dest[0] = a;
	dest[1] = a;
	dest[2] = a;
}

void	ft_vec4_fill(float a, t_vec4 dest)
{
	dest[0] = a;
	dest[1] = a;
	dest[2] = a;
	dest[3] = a;
}
