#ifndef SO_LONG_H
# define SO_LONG_H

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_images
{
	int		messi;
	int		cup;
	int		ball;
	int		wall;
	int		green;
}			t_images;

typedef struct s_all
{
	char	**map_layer;
	int		map_h;
	int		map_w;
	int		collect;
}			t_all;

t_all		*read_map(char *mapstr);
void		check_path(char *str);
void		check_xpm(void);
void		map_size_checker(t_all *all);
void		map_char_checker(char *map, t_all *all);
void		edge_check(t_all *all);
#endif