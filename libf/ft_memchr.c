/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fay <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 18:18:03 by fay               #+#    #+#             */
/*   Updated: 2022/10/18 15:37:40 by fay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s1;
	unsigned int	b;

	c = (unsigned char)c;
	s1 = (unsigned char *)s;
	b = 0;
	while (b < n)
	{
		if (s1[b] == c)
			return ((void *)s1 + b);
		b++;
	}
	return (0);
}
