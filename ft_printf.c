/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdukic <sdukic@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 11:16:20 by sdukic            #+#    #+#             */
/*   Updated: 2022/10/17 18:32:15 by sdukic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include "libprintf.h"
#include "Libft/libft.h"
#define CONVS "cspdiuxX"

int	ft_printf(const char *restrict format, ...)
{
	int			i;
	int			args;
	va_list		ap;
	char const	*convs;
	char		*formats;

	convs = CONVS;
	args = ft_count_formats(format);
	formats = ft_get_formats(format);
	va_start(ap, format);
	i = 0;
	while (args--)
	{
		if (formats[i] == 's')
			ft_putstr_fd(va_arg(ap, char *), 1);
		if (formats[i] == 'd')
			ft_putnbr_fd(va_arg(ap, int), 1);
		if (formats[i] == 'c')
			ft_putchar_fd((char)va_arg(ap, int), 1);
		i++;
	}
	va_end(ap);
	return (0);
}
