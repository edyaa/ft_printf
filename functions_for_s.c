/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions_for_s.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblaze <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 13:27:11 by kblaze            #+#    #+#             */
/*   Updated: 2021/01/12 13:27:14 by kblaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		putstr(char *s, int accur)
{
	int	i;

	i = 0;
	if (s == NULL)
		return (0);
	if (accur < 0)
		while (s[i])
		{
			write(1, &s[i], 1);
			i++;
		}
	else
		while (s[i] && i < accur)
		{
			write(1, &s[i], 1);
			i++;
		}
	return (i);
}

int		len_s(char *arg1)
{
	int	len;

	len = 0;
	if (arg1 == NULL)
		len = 6;
	else
		while (arg1[len])
			len++;
	return (len);
}

int		flag_0_width_not_0(int len, char *arg1, int width, int accur)
{
	while (width-- > 0)
		write(1, " ", 1);
	len = (arg1 == NULL) ? putstr("(null)", accur) : putstr(arg1, accur);
	return (len);
}

int		flag_1_width_not_0(int len, char *arg1, int width, int accur)
{
	len = (arg1 == NULL) ? putstr("(null)", accur) : putstr(arg1, accur);
	while (width-- > 0)
		write(1, " ", 1);
	return (len);
}

int		flag_2_width_not_0(int len, char *arg1, int width, int accur)
{
	while (width-- != 0)
		write(1, "0", 1);
	len = (arg1 == NULL) ? putstr("(null)", accur) : putstr(arg1, accur);
	return (len);
}
