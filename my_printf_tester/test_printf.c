/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdukic <sdukic@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:14:04 by sdukic            #+#    #+#             */
/*   Updated: 2022/10/21 19:41:06 by sdukic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../libprintf.h"
#include"stdio.h"

int	main(void)
{
	int age = 19;
	unsigned int u_age = 19;
	int weight = 110;
	ft_printf("Hello I'm %s. \
I'm %d years old and my surname starts with %c.\n\
The address of my age var is %p.\n\
My weight in hexadecimal is %x kg.\n\
My weight in signed integer is %i kg.\n\
In big letter hexadecimal it is %X kg\n\
In small letter hexadecimal it is %x kg\n\
My unsigned age is %u\n\
I have reached 23.75%% of my life expectancy.\n\
", "Stefan", age, 'D', &age, weight, weight, weight, weight, u_age);
	printf("Printf:\n\n\
Hello I'm %s. \
I'm %d years old and my surname starts with %c.\n\
The address of my age var is %p.\n\
My weight in hexadecimal is %x kg.\n\
My weight in signed integer is %i kg.\n\
In big letter hexadecimal it is %X kg\n\
In small letter hexadecimal it is %x kg\n\
My unsigned age is %u\n\
I have reached 23.75%% of my life expectancy.\n\
", "Stefan", age, 'D', &age, weight, weight, weight, weight, u_age);
}
