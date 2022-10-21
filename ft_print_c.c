/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdukic <sdukic@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 18:44:32 by sdukic            #+#    #+#             */
/*   Updated: 2022/10/21 19:26:10 by sdukic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include "libprintf.h"
#include "libft/libft.h"

int	ft_print_c(char arg)
{
	ft_putchar_fd(arg, 1);
	return (1);
}
