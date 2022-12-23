#include "get_next_lin/get_next_line.h"
#include "libf/libft.h"
#include "so_long.h"

char	*read_file(char *str, t_all *all)
{
	char	*line;
	char	*res;
	int		fd;
	int		x;
	x = -1;
	fd = open(str, O_RDONLY | O_CREAT);
	res = "";
	while (1)
	{
		line = get_next_line(fd);
		// ?
		if (!line)
			break ;
		while (line[++x])
		{
			if (line[x] == 'C')
				all->collect += 1;
		}
		res = ft_strjoin(res, line);
		x = -1;
		free(line);
	}
	close(fd);
	return (res);
}

t_all	*read_map(char *mapstr)
{
	t_all	*all;
	char	*map;
	all = ft_calloc(1, sizeof(t_all));
	map = read_file(mapstr, all);
	all->map_layer = ft_split(map,'\n');
	map_char_checker(map,all);
	map_size_checker(all);
	edge_check(all);
	return (all);
 }
