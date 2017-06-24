/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkuenane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 14:49:39 by lkuenane          #+#    #+#             */
/*   Updated: 2017/06/06 18:13:15 by lkuenane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char				*getstr(char *ptr)
{
	char	*str;
	int		i;

	i = 0;
	while (ptr[i] != '\0')
		i++;
	if (!(str = (char *)malloc(sizeof(char) * i + 1)))
		return (NULL);
	i = 0;
	while (ptr[i] != '\0')
	{
		str[i] = ptr[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char					*ft_itoa(int n)
{
	int			neg;
	char		*ptr;
	long int	num;
	char		buf[50];

	neg = 0;
	num = n;
	ptr = &buf[49];
	*ptr = '\0';
	if (num == 0)
		*--ptr = '0';
	if (num < 0)
	{
		neg = 1;
		num = num * -1;
	}
	while (num > 0)
	{
		*--ptr = "0123456789"[num % 10];
		num = num / 10;
	}
	if (neg == 1)
		*--ptr = '-';
	return (getstr(ptr));
}
