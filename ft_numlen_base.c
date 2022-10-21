/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numlen_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdukic <sdukic@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 01:42:32 by sdukic            #+#    #+#             */
/*   Updated: 2022/10/21 20:10:42 by sdukic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_numlen_base(unsigned int n, int base)
{
	int	size;

	size = 1;
	if (n < 0)
		size++;
	while (n >= base || n <= -base)
	{
		n = n / base;
		size++;
	}
	return (size);
}
