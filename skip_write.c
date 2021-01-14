/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_writedoproc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblaze <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 14:17:04 by kblaze            #+#    #+#             */
/*   Updated: 2021/01/12 13:28:22 by kblaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

const char	*write_before_percent(const char *str)
{
	while (*str != '%' && *str)
	{
		ft_putchar(*str);
		str++;
	}
	*str == '%' ? str++ : 0;
	return (str);
}

const char	*skip_before_type(const char *str)
{
	while (*str != 'd' && *str != 'i' && *str != 's' && *str != 'c' &&
	*str != 'p' && *str != 'u' && *str != 'x' && *str != 'X' &&
	*str != '%' && *str)
		str++;
	return (str);
}

const char	*skip_minus(const char *str)
{
	while (*str == '-' && *str)
		str++;
	return (str);
}
