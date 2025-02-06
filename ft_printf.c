/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: username <uanglade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 16:08:57 by username          #+#    #+#             */
/*   Updated: 2025/02/06 16:43:11 by username         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	handle_format(int *ret, int fd, char action, va_list args)
{
	if (action == 'c')
		*ret += ft_putchar_fd((char)va_arg(args, int), fd);
	if (action == 's')
		*ret += ft_putstr_fd((char*)va_arg(args, char*), fd);
	if (action == 'd' || action == 'i')
		ft_putnbr_fd((int)va_arg(args, int), fd, ret);
	if (action == 'x')
		ft_putnbr_base_fd(fd, (long long)va_arg(args, int), "0123456789abcdef", ret);
	if (action == 'X')
		ft_putnbr_base_fd(fd, (long long)va_arg(args, int), "0123456789ABCDEF", ret);
	if (action == 'p')
		ft_putptr_fd(fd, (unsigned long long)va_arg(args, void*));
	if (action == 'u')
		ft_putnbr_fd((unsigned int)va_arg(args, unsigned int), fd, ret);
	if (action == '%')
		*ret += ft_putchar_fd('%', fd);
	else
		*ret += (ft_putchar_fd('%', fd) + ft_putchar_fd(action, fd));
}

int	ft_fprintf_fd(int fd, const char *format, ...)
{
	int	ret;
	int	i;
	va_list	args;

	ret = 0;
	i = -1;
	if (!format)
		return (ret);
	va_start(args, format);
	while (format[++i])
	{
		if (format[i] == '%')
		{
			handle_format(&ret, fd, format[i + 1], args);
			i++;
		}
		else
		{
			ft_putchar_fd(format[i], fd);
			ret++;
		}
	}
	return (ret);
}
