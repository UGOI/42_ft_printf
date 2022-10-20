/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_in_format.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdukic <sdukic@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:55:44 by sdukic            #+#    #+#             */
/*   Updated: 2022/10/20 19:46:12 by sdukic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include "libprintf.h"
#include "libft/libft.h"
#define CONVS "cspdiuxX"

int	ft_print_in_format(char conv, va_list ap)
{
	char			*str;
	int				num;
	int				u_num;
	unsigned int	hex;
	void			*ptr;

	if (conv == 's')
	{
		str = va_arg(ap, char *);
		ft_putstr_fd(str, 1);
		return (ft_strlen(str));
	}
	if (conv == 'd')
	{
		num = va_arg(ap, signed int);
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
		ft_putpoin(ptr);
		return (ft_ptrlen(ptr));
	}
	if (conv == 'x')
	{
		hex = va_arg(ap, unsigned int);
		ft_putnbr_base(hex, "0123456789abcdef");
	}
	if (conv == 'X')
	{
		hex = va_arg(ap, unsigned int);
		ft_putnbr_base(hex, "0123456789ABCDEF");
	}
	if (conv == 'i')
	{
		num = va_arg(ap, int);
		ft_putnbr_fd(num, 1);
		return (ft_numlen(num));
	}
	if (conv == 'u')
	{
		u_num = va_arg(ap, unsigned int);
		ft_put_unsig_nbr_fd(u_num, 1);
		return (ft_numlen(u_num));
	}
	return (0);
}
