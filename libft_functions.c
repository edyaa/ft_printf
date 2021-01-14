/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblaze <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 13:28:02 by kblaze            #+#    #+#             */
/*   Updated: 2021/01/12 13:28:04 by kblaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

int			ft_atoi(const char *str)
{
	int						i;
	unsigned long long int	res;
	int						sign;

	i = 0;
	sign = 1;
	res = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	sign == 1 && res > 9223372036854775807 ? res = -1 : 0;
	sign == -1 && res > 9223372036854775807 ? res = 0 : 0;
	return (res * sign);
}

void		ft_putnbr(int n)
{
	int	i;
	int	res;
	int	num;

	n == -2147483648 ? write(1, "-2147483648", 11) : 0;
	if (n < 0 && n != -2147483648)
	{
		n = -n;
		write(1, "-", 1);
	}
	i = 1;
	num = n;
	while ((n / 10) > 0 && n != -2147483648)
	{
		n = n / 10;
		i = i * 10;
	}
	while (i > 0 && n != -2147483648)
	{
		res = (num / i) + '0';
		num = num % i;
		write(1, &res, 1);
		i = i / 10;
	}
}
