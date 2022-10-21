/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_bigX.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdukic <sdukic@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 18:44:32 by sdukic            #+#    #+#             */
/*   Updated: 2022/10/21 20:59:23 by sdukic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include "libprintf.h"
#include "libft/libft.h"

int	ft_print_bigx(unsigned long int arg)
{
	ft_putnbr_base(arg, "0123456789ABCDEF");
	return (ft_numlen_base(arg, 16));
}
