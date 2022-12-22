#include "so_long.h"

void	check_xpm(void)
{
	t_images	images;

	images.messi = open("", O_RDWR);
	images.cup = open("", O_RDWR);
	images.ball = open("", O_RDWR);
	images.wall = open("", O_RDWR);
	images.green = open("", O_RDWR);
	if (images.messi <= 0 || images.cup <= 0 || images.ball <= 0
		|| images.wall <= 0 || images.green <= 0)
	{
		close(images.messi);
		close(images.cup);
		close(images.ball);
		close(images.wall);
		close(images.green);
		exit(1);
	}
	close(images.messi);
	close(images.cup);
	close(images.ball);
	close(images.wall);
	close(images.green);
}

void	check_path(char *str)
{
	int len;
	len = ft_strlen(str);
	if (str[len - 1] != 'r' || str[len - 2] != 'e' || str[len - 3] != 'b'
		|| str[len - 4] != '.')
	{
		write(2, "ber error", 9);
		exit(1);
	}
}