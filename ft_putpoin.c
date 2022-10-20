/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdukic <sdukic@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 01:56:11 by sdukic            #+#    #+#             */
/*   Updated: 2022/10/20 17:42:28 by sdukic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include "libprintf.h"
#include "libft/libft.h"
#define CONVS "cspdiuxX"

void	ft_putpoin(void *ptr)
{
	ft_putnbr_base((int) ptr, "0123456789abcdef");
}
