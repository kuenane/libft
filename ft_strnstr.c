/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkuenane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 19:26:35 by lkuenane          #+#    #+#             */
/*   Updated: 2017/06/06 21:12:51 by lkuenane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t		len;

	len = ft_strlen(little);
	if (len == 0)
		return ((char *)big);
	while (*big && len <= n--)
	{
		if (ft_memcmp(big++, little, len) == 0)
			return ((char *)big - 1);
	}
	return (NULL);
}
