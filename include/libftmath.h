/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftmath.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uanglade <uanglade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 14:15:14 by uanglade          #+#    #+#             */
/*   Updated: 2025/03/30 21:17:26 by uanglade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTMATH_H
# define LIBFTMATH_H

# include <math.h>

typedef float	t_vec2[2];
typedef float	t_vec3[3];
typedef float	t_vec4[4];

typedef float	t_mat2[2][2];
typedef float	t_mat3[3][3];
typedef float	t_mat4[4][4];

void	ft_vec2_normalize(t_vec2 a);
void	ft_vec3_normalize(t_vec3 a);
void	ft_vec4_normalize(t_vec4 a);

void	ft_vec2_fill(float a, t_vec2 dest);
void	ft_vec3_fill(float a, t_vec3 dest);
void	ft_vec4_fill(float a, t_vec4 dest);

void	ft_vec2_copy(t_vec2 a, t_vec2 dest);
void	ft_vec3_copy(t_vec3 a, t_vec3 dest);
void	ft_vec4_copy(t_vec4 a, t_vec4 dest);

float	ft_vec2_dot(t_vec2 a, t_vec2 b);
float	ft_vec3_dot(t_vec3 a, t_vec3 b);
float	ft_vec4_dot(t_vec4 a, t_vec4 b);

float	ft_vec2_norm(t_vec2 a);
float	ft_vec3_norm(t_vec3 a);
float	ft_vec4_norm(t_vec4 a);

void	ft_vec2_add(t_vec2 a, t_vec2 b, t_vec2 dest);
void	ft_vec3_add(t_vec3 a, t_vec3 b, t_vec3 dest);
void	ft_vec4_add(t_vec4 a, t_vec4 b, t_vec4 dest);

void	ft_mat2_identity(t_mat2 dest);
void	ft_mat3_identity(t_mat3 dest);
void	ft_mat4_identity(t_mat4 dest);

void	ft_mat2_copy(t_mat2 m, t_mat2 dest);
void	ft_mat3_copy(t_mat3 m, t_mat3 dest);
void	ft_mat4_copy(t_mat4 m, t_mat4 dest);

void	ft_mat2_mul(t_mat2 a, t_mat2 b, t_mat2 dest);
void	ft_mat3_mul(t_mat3 a, t_mat3 b, t_mat3 dest);
void	ft_mat4_mul(t_mat4 a, t_mat4 b, t_mat4 dest);

void	ft_mat2_mulv(t_mat2 m, t_vec2 v, t_vec2 dest);
void	ft_mat3_mulv(t_mat3 m, t_vec3 v, t_vec3 dest);
void	ft_mat4_mulv(t_mat4 m, t_vec4 v, t_vec4 dest);

#endif
