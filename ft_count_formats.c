/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_formats.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdukic <sdukic@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:35:33 by sdukic            #+#    #+#             */
/*   Updated: 2022/10/21 21:20:37 by sdukic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"
#include "libft/libft.h"
#define CONVS "cspdiuxX%"

int	ft_count_formats(const char *restrict format)
{
	int			args;
	char const	*convs;

	convs = CONVS;
	args = 0;
	while (*format)
	{
		if (*format++ == '%')
		{
			if (ft_strchr(convs, *format) && *format)
				args++;
		}
	}
	return (args);
}
