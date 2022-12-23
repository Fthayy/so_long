#include "get_next_lin/get_next_line.h"
#include "libf/libft.h"
#include "so_long.h"

void	map_char_checker(char *map, t_all *all)
{
	int	i;

	all->map_h = 1;
	i = 0;
	while (map[i] != '\0')
	{
		if (map[i] == 'C' || map[i] == '1' || map[i] == '0' || map[i] == 'P'
			|| map[i] == 'E')
			i++;
		else if (map[i++] == '\n')
			all->map_h += 1;
		else
		{
			write(2, "Char Error", 10);
			exit(1);
		}
	}
}

void	map_size_checker(t_all *all)
{
	char	*line;
	int		fd;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(all->map_layer[0]);
	all->map_w = len;
	while (all->map_layer[i])
	{
		if (len != ft_strlen(all->map_layer[i]) && len != 0)
		{
			write(2, "size error", 10);
			exit(1);
		}
		i++;
	}
}

void	edge_check(t_all *all)
{
	char **layer = all->map_layer;
	int i;
	int j;

	i = 0;
	j = 0;
	while (layer[i])
	{
		j = 0;
		while (layer[i][j])
		{
			if (((i == 0) || (i == all->map_h - 1)) && layer[i][j] != '1')
			{
				write(2, "edge error", 10);
				exit(1);
			}
			if ((layer[i][0] != '1') || (layer[i][all->map_w - 1] != '1'))
			{
				write(2, "edge error", 10);
				exit(1);
			}
			j++;
		}
		i++;
	}
}