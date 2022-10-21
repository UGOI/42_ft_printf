/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdukic <sdukic@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 11:16:20 by sdukic            #+#    #+#             */
/*   Updated: 2022/10/21 21:20:37 by sdukic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include "ft_printf.h"
#include "libft/libft.h"
#define CONVS "cspdiuxX%"

int	ft_printf(const char *restrict format, ...)
{
	va_list		ap;
	char const	*convs;
	int			count;

	count = 0;
	convs = CONVS;
	va_start(ap, format);
	while (*format)
	{
		if (*format != '%')
		{
			ft_putchar_fd(*format, 1);
			count++;
		}
		if (*format++ == '%')
		{
			if (ft_strchr(convs, *format) && *format)
			{
				// printf("count: %d\n", count);
				count += ft_print_in_format(*format, ap);
				// printf("count: %d\n", count);
			}
			format++;
		}
	}
	va_end(ap);
	return (count);
}
