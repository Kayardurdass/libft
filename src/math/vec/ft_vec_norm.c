/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec3_norm.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uanglade <uanglade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 15:14:02 by uanglade          #+#    #+#             */
/*   Updated: 2025/03/30 15:16:50 by uanglade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/libftmath.h"

float	ft_vec2_norm(t_vec2 a)
{
	return (sqrt(pow(a[0], 2) + pow(a[1], 2)));
}

float	ft_vec3_norm(t_vec3 a)
{
	return (sqrt(pow(a[0], 2) + pow(a[1], 2) + pow(a[2], 2)));
}

float	ft_vec4_norm(t_vec4 a)
{
	return (sqrt(pow(a[0], 2) + pow(a[1], 2) + pow(a[2], 2) + pow(a[3], 2)));
}
