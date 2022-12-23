/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fay <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 11:14:32 by fay               #+#    #+#             */
/*   Updated: 2022/12/08 11:14:33 by fay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <errno.h>
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000
# endif

char	*get_next_line(int fd);
char	*ft_getscript(int fd, char *left_str);
char	*get_line(char *left_str);
char	*last_get_script(char *left_str);
char	*ft_get_strjoin(char *left_str, char *buff);
size_t	ft_get_strlen(char *s);
char	*ft_get_strchr(char *s, int c);
#endif
