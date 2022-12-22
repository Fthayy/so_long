/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fay <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 09:40:11 by fay               #+#    #+#             */
/*   Updated: 2022/10/18 13:33:03 by fay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				len;
	unsigned char	f;

	f = c;
	len = ft_strlen(s);
	while (len >= 0)
	{
		if (s[len] == f)
			return ((char *)s + len);
		len--;
	}
	return (0);
}
