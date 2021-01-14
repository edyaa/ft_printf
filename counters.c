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

int	count1(int i, int accuracy, int width)
{
	if (width > i && accuracy >= i && width >= accuracy)
		i = (width - accuracy) + accuracy;
	else if (width > i && accuracy >= i && width < accuracy)
		i = accuracy;
	else if (width >= i && accuracy <= i)
		i = i + (width - i);
	else if (width <= i && accuracy >= i)
		i = i + (accuracy - i);
	return (i);
}

int	count2(int i, int accuracy, int width)
{
	if (width > i && accuracy >= i && width >= accuracy)
		i = (width - accuracy) + accuracy;
	else if (width >= i && accuracy >= i && width < accuracy)
		i = accuracy;
	else if (width > i && accuracy < i)
		i = i + (width - i);
	else if (width < i && accuracy > i)
		i = i + (accuracy - i);
	return (i);
}

int	count3(int i, int accuracy, int width)
{
	if (width > i && accuracy > i)
		i = i + (width - i);
	else if (width > i && accuracy < 0)
		i = i + (width - i);
	else if (width > accuracy & accuracy == 0)
		i = width;
	else if (width > accuracy && accuracy > 0)
		i = (width - accuracy) + accuracy;
	return (i);
}
