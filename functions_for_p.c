/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions_for_p.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblaze <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 13:27:01 by kblaze            #+#    #+#             */
/*   Updated: 2021/01/12 13:27:04 by kblaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_putnbr_p(unsigned long long int n)
{
	unsigned long long int	i;
	unsigned long long int	res;
	unsigned long long int	num;

	i = 1;
	num = n;
	write(1, "0x", 2);
	while ((n / 16) > 0)
	{
		n = n / 16;
		i = i * 16;
	}
	while (i > 0)
	{
		num / i <= 9 ? res = (num / i) + '0' : 0;
		num / i > 9 && num / i < 16 ? res = (num / i - 10) + 'a' : 0;
		num = num % i;
		write(1, &res, 1);
		i = i / 16;
	}
}

int		lensim_p(unsigned long long int arg)
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
	return (len + 2);
}

void	flag0_p(int width, int accur, unsigned long long int arg1, int dot)
{
	if (width != 0 && accur != 0)
	{
		width = (width > accur) ? width - accur : 0;
		while (width-- > 0)
			write(1, " ", 1);
		while (accur-- > 0)
			write(1, "0", 1);
		arg1 == 0 ? write(1, "0x0", 3) : ft_putnbr_p(arg1);
	}
	if (width != 0 && accur == 0)
	{
		while (width-- > 0)
			write(1, " ", 1);
		if (arg1 == 0 && dot == 1)
			write(1, "0x", 2);
		else if (arg1 == 0 && dot == 0)
				write(1, "0x0", 3);
		else
			ft_putnbr_p(arg1);
	}
	if (width == 0 && accur != 0)
	{
		while (accur-- > 0)
			write(1, "0", 1);
		arg1 != 0 ? ft_putnbr_p(arg1) : 0;
	}
}

void	flag1_p(int width, int accur, unsigned long long int arg1, int dot)
{
	if (width != 0 && accur != 0)
	{
		width = (width > accur) ? width - accur : 0;
		while (accur-- > 0)
			write(1, "0", 1);
		arg1 == 0 ? write(1, "0x0", 3) : ft_putnbr_p(arg1);
		while (width-- > 0)
			write(1, " ", 1);
	}
	if (width != 0 && accur == 0)
	{
		if (arg1 == 0 && dot == 1)
			write(1, "0x", 2);
		else if (arg1 == 0 && dot == 0)
				write(1, "0x0", 3);
		else
			ft_putnbr_p(arg1);
		while (width-- > 0)
			write(1, " ", 1);
	}
	if (width == 0 && accur != 0)
	{
		while (accur-- > 0)
			write(1, "0", 1);
		arg1 == 0 ? write(1, "0x0", 3) : ft_putnbr_p(arg1);
	}
}

void	flag2_p(int width, int accur, unsigned long long int arg1)
{
	if (width != 0 && accur != 0)
	{
		width = (width > accur) ? width - accur : 0;
		while (width-- > 0)
			write(1, " ", 1);
		while (accur-- > 0)
			write(1, "0", 1);
		arg1 == 0 ? write(1, "0x0", 3) : ft_putnbr_p(arg1);
	}
	if (width != 0 && accur == 0)
	{
		while (width-- > 0)
			write(1, "0", 1);
		arg1 == 0 ? write(1, "0x0", 3) : ft_putnbr_p(arg1);
	}
	if (width == 0 && accur != 0)
	{
		while (accur-- > 0)
			write(1, "0", 1);
		arg1 == 0 ? write(1, "0x0", 3) : ft_putnbr_p(arg1);
	}
}
