/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   driver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdukic <sdukic@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:14:04 by sdukic            #+#    #+#             */
/*   Updated: 2022/10/19 18:46:40 by sdukic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libprintf.h"
#include"stdio.h"

int	main(void)
{
	int age = 19;
	ft_printf("Hello I'm %s I'm %d years old and my surname starts with %c. The address of my age var is %p. Bye!\n", "Stefan", age, 'D', &age);
}
