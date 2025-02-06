/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: username <uanglade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 16:31:53 by username          #+#    #+#             */
/*   Updated: 2025/02/06 16:35:01 by username         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_base_fd(int fd, long long n, const char *base, int *len)
{
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
		(*len)++;
	}
	if (n >= (long long)ft_strlen(base))
		ft_putnbr_base_fd(fd, n / ft_strlen(base), base, len);
	ft_putchar_fd(base[n % ft_strlen(base)], fd);
	(*len)++;
}

void	ft_putptr_fd_(int fd, unsigned long int ptr, const char *base, int *len)
{
	if (ptr >= (unsigned long int)ft_strlen(base))
		ft_putnbr_base_fd(fd, ptr / ft_strlen(base), base, len);
	ft_putchar_fd(base[ptr % ft_strlen(base)], fd);
	(*len)++;
}

int	ft_putptr_fd(int fd, unsigned long int ptr)
{
	int	ret;

	if (ptr == 0)
	{
		return (ft_putstr_fd("(nil)", fd));
	}
	ret = 2;
	ft_putstr_fd("0x", fd);
	ft_putptr_fd_(fd, ptr, "0123456789abcdef", &ret);
	return (ret);
}
