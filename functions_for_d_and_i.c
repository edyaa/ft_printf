/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions_for_d_and_i.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblaze <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 13:26:18 by kblaze            #+#    #+#             */
/*   Updated: 2021/01/12 13:26:27 by kblaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_lensim(int arg)
{
	int	len;
	int	znak;

	len = 0;
	znak = arg;
	if (arg == -2147483648)
		return (11);
	if (arg < 0 && arg != -2147483648)
		arg = -arg;
	if (arg == 0)
		len = 1;
	while (arg > 0)
	{
		arg = arg / 10;
		len++;
	}
	if (znak < 0)
		len++;
	return (len);
}

void	ft_minint1(int width, int accur, int flag)
{
	if (width > accur && width > 11 && accur > 10 && flag == 1)
	{
		accur = accur - 10;
		width = width - 11 - accur;
		write(1, "-", 1);
		while (accur-- > 0)
			write(1, "0", 1);
		write(1, "2147483648", 10);
		while (width-- > 0)
			write(1, " ", 1);
	}
	if (width > accur && width > 11 && accur > 10)
	{
		accur = accur - 10;
		width = width - 11 - accur;
		while (width-- > 0)
			write(1, " ", 1);
		write(1, "-", 1);
		while (accur-- > 0)
			write(1, "0", 1);
		write(1, "2147483648", 10);
	}
}

void	ft_minint2(int width, int accur, int flag)
{
	if (width > accur && width > 11 && accur <= 10 && flag == 1)
	{
		width = width - 11;
		write(1, "-2147483648", 11);
		while (width-- > 0)
			write(1, " ", 1);
	}
	if (width > accur && width > 11 && accur <= 10)
	{
		width = width - 11;
		if (flag == 2 && accur <= 0)
		{
			write(1, "-", 1);
			while (width-- > 0)
				write(1, "0", 1);
			write(1, "2147483648", 10);
		}
		else
		{
			while (width-- > 0)
				write(1, " ", 1);
			write(1, "-2147483648", 11);
		}
	}
}

void	ft_minint(int width, int accur, int flag)
{
	if (width > accur && width > 11 && accur > 10 && flag == 1)
		ft_minint1(width, accur, flag);
	else if (width > accur && width > 11 && accur > 10)
		ft_minint1(width, accur, flag);
	else if (width > accur && width > 11 && accur <= 10)
		ft_minint2(width, accur, flag);
	else if (width > accur && width > 11 && accur <= 10)
		ft_minint1(width, accur, flag);
	else if (width <= 11 && accur <= 10)
		ft_putnbr(-2147483648);
}
