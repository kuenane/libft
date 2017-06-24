/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkuenane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/28 05:28:06 by lkuenane          #+#    #+#             */
/*   Updated: 2017/06/06 22:33:36 by lkuenane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *str)
{
	int		i;
	int		l;
	char	*dest;

	i = 0;
	l = ft_strlen((char*)str);
	dest = (char*)malloc((sizeof(char) * l) + 1);
	if (!dest)
		return (NULL);
	while (str[i] && str)
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
