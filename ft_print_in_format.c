/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_in_format.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdukic <sdukic@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:55:44 by sdukic            #+#    #+#             */
/*   Updated: 2022/10/19 18:51:37 by sdukic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include "libprintf.h"
#include "libft/libft.h"
#define CONVS "cspdiuxX"

int	ft_print_in_format(char conv, va_list ap)
{
	char	*str;
	int		num;
	void	*ptr;

	if (conv == 's')
	{
		str = va_arg(ap, char *);
		ft_putstr_fd(str, 1);
		return (ft_strlen(str));
	}
	if (conv == 'd')
	{
		num = va_arg(ap, int);
		ft_putnbr_fd(num, 1);
		return (ft_numlen(num));
	}
	if (conv == 'c')
	{
		ft_putchar_fd((char)va_arg(ap, int), 1);
		return (1);
	}
	if (conv == 'p')
	{
		ptr = va_arg(ap, void *);
		ft_putpoin_fd(ptr, 1);
		return (ft_ptrlen(ptr));
	}
	return (0);
}
