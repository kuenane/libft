/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkuenane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 15:41:45 by lkuenane          #+#    #+#             */
/*   Updated: 2017/06/07 00:04:39 by lkuenane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *s1;

	s1 = (unsigned char *)s;
	while (n--)
	{
		if (*s1 == (unsigned char)c)
			return (s1);
		s1++;
	}
	return (NULL);
}
