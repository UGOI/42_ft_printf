/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   driver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdukic <sdukic@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:14:04 by sdukic            #+#    #+#             */
/*   Updated: 2022/10/17 18:19:16 by sdukic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libprintf.h"
#include"stdio.h"

int	main(void)
{
	int	args;

	args = ft_count_formats("Hello %d %s %d");
	// printf("%d\n", args);
	ft_printf("Hello %s %d %c\n", "Hello", 6, 'c');
}
