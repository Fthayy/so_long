/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fay <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 15:50:09 by fay               #+#    #+#             */
/*   Updated: 2022/10/16 15:01:06 by fay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned long	x;
	char			*s1;
	const char		*s2;

	x = 0;
	s1 = dst;
	s2 = src;
	if (!dst && !src)
		return (0);
	while (x < n)
	{
		s1[x] = s2[x];
		x++;
	}
	return (s1);
}
