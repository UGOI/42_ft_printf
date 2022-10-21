/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libprintf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdukic <sdukic@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 23:34:13 by sdukic            #+#    #+#             */
/*   Updated: 2022/10/21 21:14:54 by sdukic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBPRINTF_H
# define LIBPRINTF_H
# include<stdarg.h>

int		ft_count_formats(const char *restrict format);
int		ft_printf(const char *restrict format, ...);
int		ft_print_in_format(char conv, va_list	ap);
int		ft_numlen(int n);
void	ft_putpoin(void *ptr);
int		ft_ptrlen(void *ptr);
void	ft_putnbr_base(int nbr, char *base);
void	ft_put_unsig_nbr_fd(int unsigned n, int fd);
void	ft_put_unsig_long_nbr_base(unsigned long int nbr, char *base);
int		ft_numlen_base(long int n, int base);

int		ft_print_s(char	*str);
int		ft_print_d(signed int arg);
int		ft_print_c(char arg);
int		ft_print_p(void *arg);
int		ft_print_x(unsigned long int arg);
int		ft_print_bigx(unsigned long int arg);
int		ft_print_i(int arg);
int		ft_print_u(unsigned int arg);
#endif
