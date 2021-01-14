/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblaze <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 13:28:31 by kblaze            #+#    #+#             */
/*   Updated: 2021/01/09 13:28:34 by kblaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int			ft_printf(const char *str, ...);
void		ft_putnbr(int n);
void		ft_putnbr_u(unsigned int n);
void		ft_putchar(char c);
int			ft_atoi(const char *str);
int			_width(const char *str, va_list argument);
int			ft_lensim(int arg);
int			ft_lensim_u(unsigned int arg);
int			accuracy(const char *str, va_list argument);
int			ft_accminus(int accur, int arg1, int width);
const char	*write_before_percent(const char *str);
const char	*skip_before_type(const char *str);
const char	*skip_minus(const char *str);
int			flags(const char *str);
void		ft_putnbr_x(unsigned int n);
int			ft_lensim_x(unsigned int arg);
void		ft_if_flag0_x(int width, int accur, unsigned int arg1);
void		ft_if_flag1_x(int width, int accur, unsigned int arg1);
void		ft_if_flag2_x(int width, int accur, unsigned int arg1);
void		ft_putnbr_p(unsigned long long int n);
int			ft_lensim_p(unsigned long long int arg);
void		ft_if_flag0_p(int width, int accur, unsigned long long int arg1);
void		ft_if_flag1_p(int width, int accur, unsigned long long int arg1);
void		ft_if_flag2_p(int width, int accur, unsigned long long int arg1);
void		ft_putnbr_xx(unsigned int n);
int			ft_lensim_xx(unsigned int arg);
void		ft_if_flag0_xx(int width, int accur, unsigned int arg1);
void		ft_if_flag1_xx(int width, int accur, unsigned int arg1);
void		ft_if_flag2_xx(int width, int accur, unsigned int arg1);
int			parser(const char *str, va_list argument, int i, int j);
void		ft_if_flag0(int width, int accur, int arg1);
void		ft_if_flag1(int width, int accur, int arg1);
void		ft_if_flag2(int width, int accur, int arg1);
void		ft_if_flag0_u(int width, int accur, unsigned int arg1);
void		ft_if_flag1_u(int width, int accur, unsigned int arg1);
void		ft_if_flag2_u(int width, int accur, unsigned int arg1);
void		ft_minint1(int width, int accur, int flag);
void		ft_minint2(int width, int accur, int flag);
void		ft_minint(int width, int accur, int flag);
int			ft_len_s(char *arg1);
int			check_type(const char *str, va_list argument);
int			type_u(va_list argument, int flag, int accur, int width);
int			type_c(va_list argument, int flag, int width);
int			type_s(va_list argument, int flag, int width, int accur);
int			type_x(va_list argument, int flag, int accur, int width);
int			type_xx(va_list argument, int flag, int accur, int width);
int			type_p(va_list argument, int flag, int accur, int width);
int			type_d_i(va_list argument, int flag, int accur, int width);
int			type_percent(int flag, int width);
int			count(const char *str, int i, int width, int accuracy);
int			ft_puts(char *s, int accur);
void		ft_accurzero(int width);
void		ft_for_di(int flag, int width, int accur, int arg1);
int			count1(int i, int accuracy, int width);
int			count2(int i, int accuracy, int width);
int			count3(int i, int accuracy, int width);


#endif