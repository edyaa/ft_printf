/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblaze <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 13:58:11 by kblaze            #+#    #+#             */
/*   Updated: 2021/01/12 13:28:14 by kblaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		_width(const char *str, va_list argument)
{
	int	width;
	int	i;

	width = 0;
	i = 0;
	while (str[i] != '%' && str[i])
		i++;
	if (str[i] == '%')
		i++;
	while (str[i] == '-' || str[i] == '0')
		i++;
	if (str[i] == '*')
		width = va_arg(argument, int);
	else if (str[i] != '-' && str[i] != '.' && str[i] != 'd' && str[i] != 'i' &&
	str[i] != '*')
		width = ft_atoi(&str[i]);
	return (width);
}

int		accuracy(const char *str, va_list argument)
{
	int	acc;
	int	i;

	acc = -1;
	i = 0;
	while (str[i] != '%' && str[i])
		i++;
	if (str[i] == '%')
		i++;
	while (str[i] != '.' && str[i] != 'd' && str[i] != 'i' && str[i] != 'p' &&
	str[i] != 'c' && str[i] != 'u' && str[i] != 'x' && str[i] != 'X' &&
	str[i] != 's' && str[i] != '%' && str[i])
		i++;
	if (str[i] == '.')
		i++;
	else
		return (acc);
	if (str[i] != '*')
		acc = ft_atoi(&str[i]);
	else
		acc = va_arg(argument, int);
	return (acc);
}

int		flags(const char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	while (str[i] != '%' && str[i])
		i++;
	if (str[i] == '%')
		i++;
	if (str[i] == '-')
		flag = 1;
	if (str[i] == '0' && str[i + 1] == '-')
		flag = 1;
	else if (str[i] == '0' && str[i + 1] != '-')
		flag = 2;
	return (flag);
}

int		count(const char *str, int i, int width, int accuracy)
{
	width < 0 ? width = -width : 0;
	if (*str == 'x' || *str == 'X' || *str == 'u' || *str == 'p')
		i = count1(i, accuracy, width);
	if (*str == 'd' || *str == 'i')
		i = count2(i, accuracy, width);
	if (*str == 'c' || *str == '%')
		width > i ? i = i + (width - i) : 0;
	if (*str == 's')
		i = count3(i, accuracy, width);
	return (i);
}

void	ft_accurzero(int width)
{
	while (width-- > 0)
		write(1, " ", 1);
}
