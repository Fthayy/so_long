/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fay <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 12:17:07 by fay               #+#    #+#             */
/*   Updated: 2022/12/22 12:17:10 by fay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

/*
    Ilk once xpm dosyalarını checkle ve map kurallara uygun mu checkle
    eger uygunsa mapi olustur
    Map olustuktan sonra hareketlere gec
*/
char	*read_file(char *str,t_map *map)
{
	char	*line;
	char	*res;
	int		fd;
    int x;
    x = -1;
    fd = open()
}

t_map	*read_map(char *mapstr)
{
	t_map	*ret;
	char	*map;

	ret = ft_calloc(1, sizeof(t_map));
}

void	open_window(t_all *all, char *mapstr)
{
	int	x;
	int	y;

	all->map = read_map(mapstr);
}

int	main(int argc, char **argv)
{
	t_all	*all;

	if (argc == 2)
	{
		check_xpm();
		check_path(argv[1]);
		open_window(all, argv[1]);
	}
	else
	{
		write(2, "Error", 5);
	}
	return (0);
}
