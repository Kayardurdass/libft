/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec_normalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uanglade <uanglade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 15:17:17 by uanglade          #+#    #+#             */
/*   Updated: 2025/03/30 15:20:51 by uanglade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/libftmath.h"

void	ft_vec2_normalize(t_vec2 a)
{
	float	norm;

	norm = ft_vec2_norm(a);
	a[0] /= norm;
	a[1] /= norm;
}

void	ft_vec3_normalize(t_vec3 a)
{
	float	norm;

	norm = ft_vec3_norm(a);
	a[0] /= norm;
	a[1] /= norm;
	a[2] /= norm;
}

void	ft_vec4_normalize(t_vec4 a)
{
	float	norm;

	norm = ft_vec4_norm(a);
	a[0] /= norm;
	a[1] /= norm;
	a[2] /= norm;
	a[3] /= norm;
}
