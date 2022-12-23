#ifndef SO_LONG_H
# define SO_LONG_H

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_images
{
	int	messi;
	int	cup;
	int	ball;
	int	wall;
	int	green;
}		t_images;

typedef struct s_map
{
    int height;
    int weight;
}		t_map;

typedef struct s_all
{
    t_map   *map;
	int collect;
}		t_all;

t_all	*read_map(char *mapstr);
void	check_path(char *str);
void	check_xpm(void);

#endif