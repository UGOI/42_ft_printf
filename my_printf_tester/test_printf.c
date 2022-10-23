/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdukic <sdukic@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:14:04 by sdukic            #+#    #+#             */
/*   Updated: 2022/10/23 19:10:55 by sdukic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../ft_printf.h"
#include<limits.h>
#include"stdio.h"

int	main(void)
{
	int	i, j;
	int	age;

	i = ft_printf("p: %p\n", LONG_MAX);
	j = printf("p: %p\n", LONG_MAX);
	printf("%d, %d\n", i, j);
}
