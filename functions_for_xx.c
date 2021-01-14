/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions_for_xx.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblaze <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 13:27:39 by kblaze            #+#    #+#             */
/*   Updated: 2021/01/12 13:27:40 by kblaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_putnbr_xx(unsigned int n)
{
	unsigned int	i;
	unsigned int	res;
	unsigned int	num;

	i = 1;
	num = n;
	while ((n / 16) > 0)
	{
		n = n / 16;
		i = i * 16;
	}
	while (i > 0)
	{
		if (num / i <= 9)
			res = (num / i) + '0';
		if (num / i > 9 && num / i < 16)
			res = (num / i - 10) + 'A';
		num = num % i;
		write(1, &res, 1);
		i = i / 16;
	}
}

int		lensim_xx(unsigned int arg)
{
	int	len;

	len = 0;
	if (arg == 0)
		len = 1;
	while (arg > 0)
	{
		arg = arg / 16;
		len++;
	}
	return (len);
}

void	flag0_xx(int width, int accur, unsigned int arg1)
{
	if (width != 0 && accur != 0)
	{
		width = (width > accur) ? width - accur : 0;
		while (width-- > 0)
			write(1, " ", 1);
		while (accur-- > 0)
			write(1, "0", 1);
		ft_putnbr_xx(arg1);
	}
	if (width != 0 && accur == 0)
	{
		while (width-- > 0)
			write(1, " ", 1);
		ft_putnbr_xx(arg1);
	}
	if (width == 0 && accur != 0)
	{
		while (accur-- > 0)
			write(1, "0", 1);
		ft_putnbr_xx(arg1);
	}
}

void	flag1_xx(int width, int accur, unsigned int arg1)
{
	if (width != 0 && accur != 0)
	{
		width = (width > accur) ? width - accur : 0;
		while (accur-- > 0)
			write(1, "0", 1);
		ft_putnbr_xx(arg1);
		while (width-- > 0)
			write(1, " ", 1);
	}
	if (width != 0 && accur == 0)
	{
		ft_putnbr_xx(arg1);
		while (width-- > 0)
			write(1, " ", 1);
	}
	if (width == 0 && accur != 0)
	{
		while (accur-- > 0)
			write(1, "0", 1);
		ft_putnbr_xx(arg1);
	}
}

void	flag2_xx(int width, int accur, unsigned int arg1)
{
	if (width != 0 && accur != 0)
	{
		width = (width > accur) ? width - accur : 0;
		while (width-- > 0)
			write(1, " ", 1);
		while (accur-- > 0)
			write(1, "0", 1);
		ft_putnbr_xx(arg1);
	}
	if (width != 0 && accur == 0)
	{
		while (width-- > 0)
			write(1, "0", 1);
		ft_putnbr_xx(arg1);
	}
	if (width == 0 && accur != 0)
	{
		while (accur-- > 0)
			write(1, "0", 1);
		ft_putnbr_xx(arg1);
	}
}
