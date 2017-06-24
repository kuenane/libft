/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkuenane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 11:09:33 by lkuenane          #+#    #+#             */
/*   Updated: 2017/06/08 17:09:57 by lkuenane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		pre_atoi(const char *str)
{
	int		i;
	int		positive;
	int		negative;

	i = 0;
	positive = 0;
	negative = 0;
	while (str[i])
	{
		if (str[i] == '+')
			positive++;
		if (str[i] == '-')
			negative++;
		i++;
	}
	if (positive >= 2)
		return (0);
	if (positive > 0 && negative > 0)
		return (0);
	else
		return (1);
}

int				ft_atoi(const char *str)
{
	int				i;
	int				neg;
	long long		res;

	i = 0;
	neg = 1;
	res = 0;
	if (pre_atoi(str) == 0)
		return (0);
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\v' || str[i] == '+'
			|| str[i] == '\f' || str[i] == '\r' || str[i] == '\n')
		i++;
	if (str[i] == '-')
	{
		neg = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * neg);
}
