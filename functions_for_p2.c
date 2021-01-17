/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions_for_p2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblaze <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 15:23:54 by kblaze            #+#    #+#             */
/*   Updated: 2021/01/17 15:23:57 by kblaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	flag0_1p(int width, unsigned long long int arg1, int dot)
{
	while (width-- > 0)
		write(1, " ", 1);
	if (arg1 == 0 && dot == 0)
		write(1, "0x0", 3);
	else if (arg1 == 0 && dot == 1)
		write(1, "0x", 2);
	else
		ft_putnbr_p(arg1);
}

void	flag1_1p(int width, unsigned long long int arg1, int dot)
{
	if (arg1 == 0 && dot == 0)
		write(1, "0x0", 3);
	else if (arg1 == 0 && dot == 1)
		write(1, "0x", 2);
	else
		ft_putnbr_p(arg1);
	while (width-- > 0)
		write(1, " ", 1);
}
