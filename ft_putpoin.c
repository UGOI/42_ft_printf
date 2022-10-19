/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdukic <sdukic@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 01:56:11 by sdukic            #+#    #+#             */
/*   Updated: 2022/10/19 02:24:51 by sdukic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include "libprintf.h"
#include "libft/libft.h"
#define CONVS "cspdiuxX"

void	ft_putpoin_fd(void *ptr, int fd)
{
	unsigned char	buf[sizeof(ptr)];
	int				i;
	unsigned char	hi;
	unsigned char	lo;
	char			tmp[2];

	i = sizeof(ptr) - 1;
	ft_memcpy(buf, &ptr, sizeof(ptr));

	while (i >= 0)
	{
		hi = (buf[i] >> 4) & 0xf;
		lo = buf[i] & 0xf;
		tmp[0] = hi;
		tmp[1] = lo;

		tmp[0] += hi < 10 ? '0' : 'a' - 10;
		tmp[1] += lo < 10 ? '0' : 'a' - 10;

		write(fd, tmp, 2);
		i--;
	}
}
