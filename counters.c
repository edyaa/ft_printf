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

int	count_xxup(int i, int accuracy, int width)
{
	if (width > i && accuracy >= i && width >= accuracy)
		i = width;
	else if (width > i && accuracy >= i && width < accuracy)
		i = accuracy;
	else if (width >= i && accuracy <= i)
		i = width;
	else if (width <= i && accuracy >= i)
		i = accuracy;
	return (i);
}

int	count_di(int i, int accuracy, int width)
{
	if (width > i && accuracy >= i && width >= accuracy)
		i = width;
	else if (width >= i && accuracy >= i && width < accuracy)
		i = accuracy;
	else if (width > i && accuracy < i)
		i = width;
	else if (width < i && accuracy > i)
		i = accuracy;
	return (i);
}

int	count_s(int i, int accuracy, int width)
{
	if (width > i && accuracy > i)
		i = width;
	else if (width > i && accuracy < 0)
		i = width;
	else if (width > accuracy & accuracy == 0)
		i = width;
	else if (width > accuracy && accuracy > 0)
		i = width;
	return (i);
}
