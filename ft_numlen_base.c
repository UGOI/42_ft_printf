/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numlen_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdukic <sdukic@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 01:42:32 by sdukic            #+#    #+#             */
/*   Updated: 2022/10/21 21:14:15 by sdukic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_numlen_base(long int n, int base)
{
	int	size;

	size = 1;
	if (n < 0)
		size++;
	while (n >= (long int) base || n <= -((long int) base))
	{
		n = n / (long int) base;
		size++;
	}
	return (size);
}
