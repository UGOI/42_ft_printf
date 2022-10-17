/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_formats.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdukic <sdukic@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:35:33 by sdukic            #+#    #+#             */
/*   Updated: 2022/10/17 18:11:43 by sdukic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libprintf.h"
#include "Libft/libft.h"
#include"stdlib.h"
#define CONVS "cspdiuxX"

char	*ft_get_formats(const char *restrict format)
{
	char const	*convs;
	char		*formats;
	int			i;

	formats = malloc(sizeof(char) * (ft_count_formats(format) + 1));
	convs = CONVS;
	i = 0;
	while (*format)
	{
		if (*format++ == '%')
		{
			if (ft_strchr(convs, *format) && *format)
				formats[i++] = *format;
		}
	}
	formats[i] = '\0';
	return (formats);
}
