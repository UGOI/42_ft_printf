/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdukic <sdukic@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:14:04 by sdukic            #+#    #+#             */
/*   Updated: 2022/10/23 18:09:54 by sdukic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../ft_printf.h"
#include<limits.h>
#include"stdio.h"

int	main(void)
{
	int	i, j;
	int	age;

	i = ft_printf("s: %s\n", NULL);
	j = printf("s: %s\n", NULL);
	printf("%d, %d\n", i, j);
}
