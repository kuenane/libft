/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkuenane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 16:48:55 by lkuenane          #+#    #+#             */
/*   Updated: 2017/06/08 08:24:08 by lkuenane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t len)
{
	int i;

	i = 0;
	while (len > 0 && src[i])
	{
		dest[i] = src[i];
		i++;
		len--;
	}
	while (len > 0)
	{
		dest[i++] = '\0';
		len--;
	}
	return (dest);
}
