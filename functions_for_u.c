/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions_for_u.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblaze <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 13:27:22 by kblaze            #+#    #+#             */
/*   Updated: 2021/01/12 13:27:24 by kblaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_putnbr_u(unsigned int n)
{
	unsigned int	i;
	unsigned int	res;
	unsigned int	num;

	i = 1;
	num = n;
	while ((n / 10) > 0)
	{
		n = n / 10;
		i = i * 10;
	}
	while (i > 0)
	{
		res = (num / i) + '0';
		num = num % i;
		write(1, &res, 1);
		i = i / 10;
	}
}

int		lensim_u(unsigned int arg)
{
	int	len;

	len = 0;
	if (arg == 0)
		len = 1;
	while (arg > 0)
	{
		arg = arg / 10;
		len++;
	}
	return (len);
}

void	flag0_u(int width, int accur, unsigned int arg1)
{
	if (width != 0 && accur != 0)
	{
		width = (width > accur) ? width - accur : 0;
		while (width-- > 0)
			write(1, " ", 1);
		while (accur-- > 0)
			write(1, "0", 1);
		ft_putnbr_u(arg1);
	}
	if (width != 0 && accur == 0)
	{
		while (width-- > 0)
			write(1, " ", 1);
		ft_putnbr_u(arg1);
	}
	if (width == 0 && accur != 0)
	{
		while (accur-- > 0)
			write(1, "0", 1);
		ft_putnbr_u(arg1);
	}
}

void	flag1_u(int width, int accur, unsigned int arg1)
{
	if (width != 0 && accur != 0)
	{
		width = (width > accur) ? width - accur : 0;
		while (accur-- > 0)
			write(1, "0", 1);
		ft_putnbr_u(arg1);
		while (width-- > 0)
			write(1, " ", 1);
	}
	if (width != 0 && accur == 0)
	{
		ft_putnbr_u(arg1);
		while (width-- > 0)
			write(1, " ", 1);
	}
	if (width == 0 && accur != 0)
	{
		while (accur-- > 0)
			write(1, "0", 1);
		ft_putnbr_u(arg1);
	}
}

void	flag2_u(int width, int accur, unsigned int arg1)
{
	if (width != 0 && accur != 0)
	{
		width = (width > accur) ? width - accur : 0;
		while (width-- > 0)
			write(1, " ", 1);
		while (accur-- > 0)
			write(1, "0", 1);
		ft_putnbr_u(arg1);
	}
	if (width != 0 && accur == 0)
	{
		while (width-- > 0)
			write(1, "0", 1);
		ft_putnbr_u(arg1);
	}
	if (width == 0 && accur != 0)
	{
		while (accur-- > 0)
			write(1, "0", 1);
		ft_putnbr_u(arg1);
	}
}
