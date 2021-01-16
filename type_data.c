/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_data.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblaze <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 13:28:33 by kblaze            #+#    #+#             */
/*   Updated: 2021/01/12 13:28:35 by kblaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		type_u(va_list argument, int flag, int accur, int width)
{
	unsigned int	arg1;
	int				len;

	arg1 = va_arg(argument, unsigned int);
	len = lensim_u(arg1);
	width < 0 ? flag = 1 : 0;
	width < 0 ? width = -width : 0;
	accur <= len && flag == 2 && accur >= 0 ? flag = 0 : 0;
	if (arg1 == 0 && accur == 0 && width == 0)
		return (0);
	else if (arg1 == 0 && accur == 0 && width != 0)
	{
		accuracy_zero(width);
		return (1);
	}
	width = (width > len) ? width - len : 0;
	accur = (accur > len) ? accur - len : 0;
	width == 0 && accur == 0 ? ft_putnbr_u(arg1) : 0;
	if (flag == 0)
		flag0_u(width, accur, arg1);
	else if (flag == 1)
		flag1_u(width, accur, arg1);
	else if (flag == 2)
		flag2_u(width, accur, arg1);
	return (len);
}

int		type_x(va_list argument, int flag, int accur, int width)
{
	unsigned int	arg1;
	int				len;

	arg1 = va_arg(argument, unsigned int);
	len = lensim_x(arg1);
	width < 0 ? flag = 1 : 0;
	width < 0 ? width = -width : 0;
	accur <= len && flag == 2 && accur >= 0 ? flag = 0 : 0;
	if (arg1 == 0 && accur == 0 && width == 0)
		return (0);
	else if (arg1 == 0 && accur == 0 && width != 0)
	{
		accuracy_zero(width);
		return (1);
	}
	width = (width > len) ? width - len : 0;
	accur = (accur > len) ? accur - len : 0;
	width == 0 && accur == 0 ? ft_putnbr_x(arg1) : 0;
	if (flag == 0)
		flag0_x(width, accur, arg1);
	else if (flag == 1)
		flag1_x(width, accur, arg1);
	else if (flag == 2)
		flag2_x(width, accur, arg1);
	return (len);
}

int		type_p(va_list argument, int flag, int accur, int width)
{
	unsigned long long int	arg1;
	int						len;

	arg1 = va_arg(argument, unsigned long long int);
	len = (arg1 == 0) ? 3 : lensim_p(arg1);
	len = (arg1 == 0 && accur == -2) ? len-1 : len;
	width < 0 ? flag = 1 : 0;
	width < 0 ? width = -width : 0;
	width = (width > len) ? width - len : 0;
	accur <= len && flag == 2 && accur >= 0 ? flag = 0 : 0;
	if (accur > len)
		accur = (arg1 != 0) ? accur - len : accur - 1;
	else if (accur != -2)
		accur = 0;
	width == 0 && accur == 0 && arg1 != 0 ? ft_putnbr_p(arg1) : 0;
	width == 0 && accur > 0 && arg1 == 0 ? write(1, "0x0", 3) : 0;
	width == 0 && accur == -2 && arg1 == 0 ? write(1, "0x", 2) : 0;
	
	if (flag == 0)
		accur == -2 ? flag0_p(width, 0, arg1, 1) : flag0_p(width, accur, arg1, 0);
	else if (flag == 1)
		accur == -2 ? flag1_p(width, 0, arg1, 1) : flag1_p(width, accur, arg1, 0);
	else if (flag == 2)
		flag2_p(width, accur, arg1);
	return (len);
}

int		type_xx(va_list argument, int flag, int accur, int width)
{
	unsigned int	arg1;
	int				len;

	arg1 = va_arg(argument, unsigned int);
	len = lensim_xx(arg1);
	width < 0 ? flag = 1 : 0;
	width < 0 ? width = -width : 0;
	accur <= len && flag == 2 && accur >= 0 ? flag = 0 : 0;
	if (arg1 == 0 && accur == 0 && width == 0)
		return (0);
	else if (arg1 == 0 && accur == 0 && width != 0)
	{
		accuracy_zero(width);
		return (1);
	}
	width = (width > len) ? width - len : 0;
	accur = (accur > len) ? accur - len : 0;
	width == 0 && accur == 0 ? ft_putnbr_xx(arg1) : 0;
	if (flag == 0)
		flag0_xx(width, accur, arg1);
	else if (flag == 1)
		flag1_xx(width, accur, arg1);
	else if (flag == 2)
		flag2_xx(width, accur, arg1);
	return (len);
}

int		type_d_i(va_list argument, int flag, int acc, int width)
{
	int	arg;
	int	len;

	arg = va_arg(argument, int);
	len = lensim(arg);
	width < 0 ? flag = 1 : 0;
	width < 0 ? width = -width : 0;
	arg == -2147483648 && acc >= width ? accuracy_minus(acc, arg, width) : 0;
	arg == -2147483648 && width > acc ? minint(width, acc, flag) : 0;
	acc <= len && flag == 2 && acc >= 0 ? flag = 0 : 0;
	if (acc == 0 && arg == 0 && width == 0)
		return (0);
	else if (acc == 0 && arg == 0 && width != 0)
	{
		accuracy_zero(width);
		return (1);
	}
	width = (width > len) ? width - len : 0;
	if (acc >= len)
		acc = (arg >= 0) ? acc - len : acc - len + 1;
	else
		acc = 0;
	ft_for_di(flag, width, acc, arg);
	arg < 0 && acc >= 0 ? len = acc + len : 0;
	return (len);
}
