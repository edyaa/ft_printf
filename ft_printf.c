/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblaze <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 13:26:36 by kblaze            #+#    #+#             */
/*   Updated: 2021/01/09 13:26:38 by kblaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	parser(const char *str, va_list argument, int i, int j)
{
	int			flag;
	const char	*str1;

	while (*str)
	{
		i = 0;
		str1 = str;
		flag = flags(str);
		while (str[i++] != '%' && str[i - 1])
			j++;
		str = write_before_percent(str);
		flag == 1 ? str = skip_minus(str) : 0;
		str = skip_before_type(str);
		if (*str == 'd' || *str == 'i' || *str == 's' || *str == 'c' ||
		*str == 'p' || *str == 'u' || *str == 'x' || *str == 'X' || *str == '%')
		{
			i = check_type(str1, argument);
			j = j + i;
			str++;
		}
	}
	return (j);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	argument;
	int		j;

	j = 0;
	i = 0;
	va_start(argument, str);
	i = parser(str, argument, i, j);
	va_end(argument);
	return (i);
}
