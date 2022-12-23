/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fay <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 11:14:26 by fay               #+#    #+#             */
/*   Updated: 2022/12/08 11:14:28 by fay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include "../libf/libft.h"

char	*get_line(char *script)
{
	char	*str;
	int		i;

	i = 0;
	if (!script[i])
		return (NULL);
	while (script[i] != '\n' && script[i] != '\0')
		i++;
	str = malloc(i * sizeof(char) + 2);
	if (!str)
		return (0);
	i = 0;
	while (script[i] != '\n' && script[i] != '\0')
	{
		str[i] = script[i];
		i++;
	}
	if (script[i] == '\n')
	{
		str[i] = script[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*last_get_script(char *script)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	while (script[i] != '\n' && script[i] != '\0')
		i++;
	if (!script[i])
	{
		free(script);
		return (0);
	}
	str = malloc(ft_get_strlen(script) * sizeof(char) - i + 1);
	if (!str)
		return (0);
	j = 0;
	i++;
	while (script[i])
		str[j++] = script[i++];
	str[j] = '\0';
	free(script);
	return (str);
}

char	*get_script(int fd, char *script)
{
	int		byte;
	char	*buff;

	buff = malloc(BUFFER_SIZE * sizeof(char) + 1);
	if (!buff)
		return (0);
	byte = 1;
	while (!ft_get_strchr(script, '\n') && byte != 0)
	{
		byte = read(fd, buff, BUFFER_SIZE);
		if (byte == -1)
		{
			free(buff);
			return (0);
		}
		buff[byte] = '\0';
		script = ft_get_strjoin(script, buff);
	}
	free(buff);
	return (script);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*script;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	script = get_script(fd, script);
	if (!script)
		return (0);
	line = get_line(script);
	script = last_get_script(script);
	return (line);
}