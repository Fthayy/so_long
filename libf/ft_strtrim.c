/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fay <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:35:22 by fay               #+#    #+#             */
/*   Updated: 2022/10/18 15:25:24 by fay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static char	*ft_printer(char const *s, unsigned int start, size_t len)
{
	char	*s1;
	int		x;
	size_t	t;

	t = ft_strlen(s);
	x = 0;
	if (start < t)
	{
		s1 = (char *)malloc((len) * sizeof(char) + 1);
		if (!s1)
			return (0);
		while (s[start] != '\0' && len > 0)
		{
			s1[x] = s[start];
			start++;
			len--;
			x++;
		}
	}
	else
		s1 = malloc(1);
	s1[x] = '\0';
	return (s1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*a;
	size_t	len;

	while (*s1 && ft_strchr(set, *s1))
		s1++;
	len = ft_strlen(s1);
	while (ft_strchr(set, s1[len]) && len)
		len--;
	a = ft_printer((char *)s1, 0, len + 1);
	return (a);
}
