/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numlen_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdukic <sdukic@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 01:42:32 by sdukic            #+#    #+#             */
/*   Updated: 2022/10/23 18:04:49 by sdukic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_numlen_base(unsigned long long n, int base)
{
	int	size;

	size = 1;
	while (n >= (unsigned long long) base)
	{
		n = n / base;
		size++;
	}
	return (size);
}
