/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdukic <sdukic@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:14:04 by sdukic            #+#    #+#             */
/*   Updated: 2022/10/21 21:07:50 by sdukic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../libprintf.h"
#include"stdio.h"

int	main(void)
{
	int	wordlen;
	int	age;

	wordlen = ft_printf("P: before %p after\n", &age);
	printf("Len: %d\n", wordlen);
	wordlen = printf("P: before %p after\n", &age);
	printf("Len: %d\n", wordlen);
}
