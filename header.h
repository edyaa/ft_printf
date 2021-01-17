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

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

int			ft_printf(const char *str, ...);
void		ft_putnbr(int n);
void		ft_putnbr_u(unsigned int n);
void		ft_putchar(char c);
int			ft_atoi(const char *str);
int			width_(const char *str, va_list argument);
int			lensim(int arg);
int			lensim_u(unsigned int arg);
int			accuracy(const char *str, va_list argument);
int			accuracy_minus(int accur, int arg1, int width);
const char	*write_before_percent(const char *str);
const char	*skip_before_type(const char *str);
const char	*skip_minus(const char *str);
int			flags(const char *str);
void		ft_putnbr_x(unsigned int n);
int			lensim_x(unsigned int arg);
void		flag0_x(int width, int accur, unsigned int arg1);
void		flag1_x(int width, int accur, unsigned int arg1);
void		flag2_x(int width, int accur, unsigned int arg1);
void		ft_putnbr_p(unsigned long long int n);
int			lensim_p(unsigned long long int arg);
void		flag0_p(int width, int accur, unsigned long long int arg1, int dot);
void		flag1_p(int width, int accur, unsigned long long int arg1, int dot);
void		flag2_p(int width, int accur, unsigned long long int arg1);
void		ft_putnbr_xx(unsigned int n);
int			lensim_xx(unsigned int arg);
void		flag0_xx(int width, int accur, unsigned int arg1);
void		flag1_xx(int width, int accur, unsigned int arg1);
void		flag2_xx(int width, int accur, unsigned int arg1);
int			parser(const char *str, va_list argument, int i, int j);
void		flag0(int width, int accur, int arg1);
void		flag1(int width, int accur, int arg1);
void		flag2(int width, int accur, int arg1);
void		flag0_u(int width, int accur, unsigned int arg1);
void		flag1_u(int width, int accur, unsigned int arg1);
void		flag2_u(int width, int accur, unsigned int arg1);
void		minint1(int width, int accur, int flag);
void		minint2(int width, int accur, int flag);
void		minint(int width, int accur, int flag);
int			len_s(char *arg1);
int			check_type(const char *str, va_list argument);
int			type_u(va_list argument, int flag, int accur, int width);
int			type_c(va_list argument, int flag, int width);
int			type_s(va_list argument, int flag, int width, int accur);
int			type_x(va_list argument, int flag, int accur, int width);
int			type_xx(va_list argument, int flag, int accur, int width);
int			type_p(va_list argument, int flag, int accur, int width, int dot);
int			type_d_i(va_list argument, int flag, int acc, int width);
int			type_percent(int flag, int width);
int			count(const char *str, int i, int width, int accuracy);
int			putstr(char *s, int accur);
void		accuracy_zero(int width);
void		ft_for_di(int flag, int width, int accur, int arg1);
int			count_xxup(int i, int accuracy, int width);
int			count_di(int i, int accuracy, int width);
int			count_s(int i, int accuracy, int width);
int			dot_(const char *str);
void		flag0_1p(int width, unsigned long long int arg1, int dot);
void		flag1_1p(int width, unsigned long long int arg1, int dot);
int			flag_0_width_not_0(int len, char *arg1, int width, int accur);
int			flag_1_width_not_0(int len, char *arg1, int width, int accur);
int			flag_2_width_not_0(int len, char *arg1, int width, int accur);

#endif
