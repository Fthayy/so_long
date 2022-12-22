/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fay <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:45:27 by fay               #+#    #+#             */
/*   Updated: 2022/10/16 18:05:00 by fay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_astrlen(int x)
{
	int	a;

	a = 0;
	if (x <= 0)
	{
		a++;
		if (x == -214748368)
			x -= 1;
		x = -x;
	}
	while (x > 0)
	{
		x = x / 10;
		a++;
	}
	return (a);
}

char	*ft_fth(void)
{
	int		x;
	char	*s;
	char	*t;

	x = 0;
	s = malloc(12 * sizeof(char));
	t = "-2147483648";
	while (x < 12)
	{
		s[x] = t[x];
		x++;
	}
	return (s);
}

char	*ft_pof(int size, int n, char *s)
{
	if (n >= 0)
	{
		while (size >= 0)
		{
			s[size] = n % 10 + '0';
			n = n / 10;
			size--;
		}
	}
	if (n < 0)
	{
		n = -n;
		while (size > 0)
		{
			s[size] = n % 10 + '0';
			n = n / 10;
			size--;
		}
		s[0] = '-';
	}
	return (s);
}

char	*ft_itoa(int n)
{
	int		size;
	char	*s;
	int		x;

	x = n;
	if (n == -2147483648)
		s = ft_fth();
	else
	{
		if (n < 0)
			n = -n;
		size = ft_astrlen(x);
		s = malloc(size * sizeof(char) + 1);
		if (!s)
			return (0);
		s[size--] = '\0';
		if (n >= 0)
			s = ft_pof(size, x, s);
	}
	return (s);
}
