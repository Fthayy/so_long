/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fay <fay@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 13:27:22 by fay               #+#    #+#             */
/*   Updated: 2022/10/07 13:00:13 by fay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned long	x;
	char			*s;

	x = 4;
	s = b;
	x = 0;
	while (x < len)
	{
		s[x] = c;
		x++;
	}
	return (s);
}