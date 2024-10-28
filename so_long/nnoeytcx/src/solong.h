/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solong.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 20:40:27 by tpoungla          #+#    #+#             */
/*   Updated: 2023/08/10 17:32:56 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOLONG_H
# define SOLONG_H

# include "../libft/libft.h"
# include "../gnl/get_next_line.h"
# include "../printf/ft_printf.h"
# include <unistd.h>
# include <fcntl.h>

typedef struct s_vector
{
	int	x;
	int	y;
}	t_vector;

typedef struct s_map
{
	t_vector	size;
	char		**map;
}	t_map;

typedef struct s_program
{
	void	*mlx;
	void	*mlx_win;
}	t_pro;

typedef struct s_main
{
	t_map		data;
	int			no_of_collect;
	int			collect_count;
	int			exit_status;
	int			move_count;
	t_vector	player;
	t_vector	exit;
	t_pro		pro;
}	t_main;

typedef struct s_data {
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}	t_data;

# define ERR "Error\n"
# define MAP_DUP_CHAR_ERR "map contains duplicate characters (exit/start)\n"
# define MAP_INVL_CHAR_ERR "map contains invalid character\n"
# define MAP_NOT_REC_ERR "map doesn't be in rectengular shape\n"
# define WRG_NUM_ARG "wrong number of arguments\n"
# define MAP_START_EXIT_ERR "missing the starting position or exit\n"
# define MAP_COLLECTIBLES_ERR "collectible is not found\n"
# define MAP_WALLS_ERR "Map must be surrounded by walls\n"
# define MAP_PTH_ERR "can't reach the exit\n"
# define MAP_FLE_ERR "map file not found\n"
# define MAP_UNR_COL "can't reach collectable\n"
# define MAP_NAME_BER "map's name didn't ends with '.ber\n"

//get_map.c
void	get_player_pos(t_main *p);
void	get_exit_pos(t_main *p);
void	close_fd(int fd, t_main *p, int h, int w);
int		get_map_size(t_main	*p, char *str);
void	get_map_data(t_main *p, char *str);

//hook.c
int		key_hook(int keycode, void *arg);
void	ft_put_pic(t_main *p, char *pic, int n, int m);
void	ft_output(t_main *p);
void	exit_con(t_main *p);
void	ft_output_util(t_main *p, int n, int m, int num);

//main.c
void	ft_free_vi(int **visited);
void	ft_free_map(t_main *p);
int		check_list(t_main *p, int *num);

//map_check.c
int		valid_char(char c);
int		*init_array(int *num, int len);
int		*valid_component(t_main *p, int *num);
int		com_num_check(t_main *p, int *num);
int		valid_wall(t_main *p);

//map_util.c
int		ft_strlen_no_line(const char *s);
void	valid_path_util(t_main *p, int x, int y, int **visited);
int		reach_collect(t_main *p, int	**visited);
int		**check_visit(t_main *p);
int		valid_path(t_main *p, int	**visited);

//move.c
void	ft_go_up(t_main *p);
void	ft_go_down(t_main *p);
void	ft_go_left(t_main *p);
void	ft_go_right(t_main *p);
void	check_move(int keycode, t_main *p);

//put_water.c
void	ft_putplayer(t_main *p, int n, int m, int num);
void	ft_putwater_util3(t_main *p, int n, int m);
void	ft_putwater_util2(t_main *p, int n, int m);
void	ft_putwater_util(t_main *p, int n, int m);
void	ft_putwater(t_main *p, int n, int m);

//showwindow.c
void	ft_putexit(t_main *p, int n, int m);
int		mlx_close(void *ptr);
void	*ft_ftoi(void *mlx, char *path);
void	windowinit(t_main	*p);

#endif