/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   counters.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblaze <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 13:25:38 by kblaze            #+#    #+#             */
/*   Updated: 2021/01/12 13:25:43 by kblaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		count_xxup(int i, int accur, int width)
{
	if (width > i && accur >= i && width >= accur)
		i = width;
	else if (width > i && accur >= i && width < accur)
		i = accur;
	else if (width >= i && accur <= i)
		i = width;
	else if (width <= i && accur >= i)
		i = accur;
	return (i);
}

int		count_di(int i, int accur, int width)
{
	if (width > i && accur >= i && width >= accur)
		i = width;
	else if (width >= i && accur >= i && width < accur)
		i = accur;
	else if (width > i && accur < i)
		i = width;
	else if (width < i && accur > i)
		i = accur;
	return (i);
}

int		count_s(int i, int accur, int width)
{
	if (width > i && accur > i)
		i = width;
	else if (width > i && accur < 0)
		i = width;
	else if (width > accur & accur == 0)
		i = width;
	else if (width > accur && accur > 0)
		i = width;
	return (i);
}
