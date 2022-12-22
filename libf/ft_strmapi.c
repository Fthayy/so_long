/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fay <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 18:30:08 by fay               #+#    #+#             */
/*   Updated: 2022/10/16 14:38:09 by fay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	x;
	unsigned int	slen;
	char			*str;

	if (!s)
		return (0);
	slen = ft_strlen((char *)s);
	x = 0;
	str = (char *)malloc((slen + 1) * sizeof(char));
	if (!str)
		return (0);
	while (x < slen)
	{
		str[x] = f(x, s[x]);
		x++;
	}
	str[x] = '\0';
	return (str);
}
