/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fay <fay@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 16:27:25 by fay               #+#    #+#             */
/*   Updated: 2022/10/18 15:20:19 by fay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*s1;
	const char	*s2;

	s1 = dst;
	s2 = src;
	i = 0;
	if (!s1 && !s2)
		return (NULL);
	if (s2 < s1)
		while (++i <= len)
			s1[len - i] = s2[len - i];
	else
		while (len-- > 0)
			*(s1++) = *(s2++);
	return (dst);
}
