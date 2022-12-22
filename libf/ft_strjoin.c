/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fay <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 13:22:50 by fay               #+#    #+#             */
/*   Updated: 2022/10/16 14:16:21 by fay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		x;
	int		y;
	char	*s3;

	x = 0;
	y = 0;
	s3 = malloc((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char) + 1);
	if (!s3)
		return (0);
	while (s1[x] != '\0')
	{
		s3[x] = s1[x];
		x++;
	}
	while (s2[y] != '\0')
	{
		s3[x] = s2[y];
		y++;
		x++;
	}
	s3[x] = '\0';
	free(s1);
	free(s2);
	return (s3);
}
