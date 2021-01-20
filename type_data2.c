/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_data2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblaze <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 13:28:40 by kblaze            #+#    #+#             */
/*   Updated: 2021/01/18 17:00:24 by kblaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		type_c(va_list argument, int flag, int width)
{
	int	arg1;

	arg1 = va_arg(argument, int);
	width < 0 ? flag = 1 : 0;
	width < 0 ? width = -width : 0;
	if (width > 1 && flag == 0)
	{
		width = width - 1;
		while (width-- > 0)
			write(1, " ", 1);
		ft_putchar(arg1);
	}
	else if (width > 1 && flag == 1)
	{
		width = width - 1;
		ft_putchar(arg1);
		while (width-- > 0)
			write(1, " ", 1);
	}
	else if (width <= 1)
		ft_putchar(arg1);
	return (1);
}

int		type_percent(int flag, int width)
{
	int	arg1;

	arg1 = '%';
	width < 0 ? flag = 1 : 0;
	width < 0 ? width = -width : 0;
	width = (width > 1) ? width - 1 : 0;
	width == 0 ? ft_putchar(arg1) : 0;
	if (width != 0 && (flag == 0 || flag == 2))
	{
		while (width-- > 0)
			if (flag == 0)
				write(1, " ", 1);
			else if (flag == 2)
				write(1, "0", 1);
		ft_putchar(arg1);
	}
	else if (width != 0 && flag == 1)
	{
		ft_putchar(arg1);
		while (width-- > 0)
			write(1, " ", 1);
	}
	return (1);
}

int		type_s(va_list argument, int flag, int width, int accur)
{
	char	*arg1;
	int		len;

	arg1 = va_arg(argument, char *);
	len = len_s(arg1);
	width < 0 ? flag = 1 : 0;
	width < 0 ? width = -width : 0;
	accur < len && accur >= 0 ? len = accur : 0;
	width = (width > len) ? width - len : 0;
	if (width != 0 && flag == 0)
		len = flag_0_width_not_0(len, arg1, width, accur);
	else if (width != 0 && flag == 1)
		len = flag_1_width_not_0(len, arg1, width, accur);
	else if (width != 0 && flag == 2)
		len = flag_2_width_not_0(len, arg1, width, accur);
	else if (width == 0)
		len = (arg1 == NULL) ? putstr("(null)", accur) : putstr(arg1, accur);
	return (len);
}

int		check_type(const char *str, va_list argument)
{
	int		i;
	int		f;
	int		dot;
	int		params[2];

	i = 0;
	dot = dot_(str);
	params[0] = width_(str, argument);
	params[1] = accuracy(str, argument);
	f = flags(str);
	while (*str != '%')
		str++;
	*str == '%' ? str++ : 0;
	str = skip_before_type(str);
	*str == 'd' || *str == 'i' ? i = type_d_i(argument,
			f, params[1], params[0]) : 0;
	*str == 'c' ? i = type_c(argument, f, params[0]) : 0;
	*str == 's' ? i = type_s(argument, f, params[0], params[1]) : 0;
	*str == 'u' ? i = type_u(argument, f, params[1], params[0]) : 0;
	*str == 'x' ? i = type_x(argument, f, params[1], params[0]) : 0;
	*str == 'X' ? i = type_xx(argument, f, params[1], params[0]) : 0;
	*str == 'p' ? i = type_p(argument, f, params, dot) : 0;
	*str == '%' ? i = type_percent(f, params[0]) : 0;
	i = count(str, i, params[0], params[1]);
	return (i);
}
