/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uanglade <uanglade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 23:00:23 by uanglade          #+#    #+#             */
/*   Updated: 2025/02/06 16:25:31 by username         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd, int *ret)
{
	if (n == INT_MIN)
	{
		ft_putstr_fd("-2147483648", fd);
		(*ret) = 11;
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
		*ret += 1;
	}
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd, ret);
	ft_putchar_fd((n % 10) + '0', fd);
	*ret += 1;
}
