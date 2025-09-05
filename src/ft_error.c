/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uanglade <uanglade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 06:26:07 by uanglade          #+#    #+#             */
/*   Updated: 2025/09/05 06:39:01 by uanglade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#ifdef DEBUG

void    ft_error(char const *file, uint32_t line, char const *msg, ...)
{
	char    *str;
	va_list ap;

	if (!msg)
		return (ft_fprintf(2, "Error: %s:%d\n", file, line), (void)0);
	va_start(ap, msg);
	vsprintf(str, msg, ap);
	va_end(ap);
	if (!str)
		ft_fprintf(2, "Error: %s:%d: An error occurred while parsing the "
			 "following format string: `%s`\n", file, line, msg);
	else
		ft_fprintf(2, "Error: %s:%d: %s\n", file, line, str);
	free(str);
}

#else

void	ft_error(char const *file, uint32_t line, char const *msg, ...)
{
	char	*str;
	va_list	ap;

	(void) file, (void) line;
	str = NULL;
	if (!msg)
		return (ft_fprintf(2, "Error: %s\n"), (void)0);
	va_start(ap, msg);
	vsprintf(str, msg, ap);
	va_end(ap);
	if (!str)
		ft_fprintf(2, "Error: An error occurred while parsing the "
			 "following format string: `%s`: %s\n", msg);
	else
		ft_fprintf(2, "Error: %s\n", str);
	free(str);
}

#endif
