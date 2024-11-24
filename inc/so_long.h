/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejsanc <alejsanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 19:39:40 by alejsanc          #+#    #+#             */
/*   Updated: 2024/07/09 22:39:31 by alejsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include "../gnl/get_next_line.h"
# include "mlx.h"
# include "ft_printf.h"

typedef struct s_data
{
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}	t_data;

typedef struct s_intersection
{
	int						row;
	int						col;
	struct s_intersection	*next;
}	t_intersection;

typedef struct s_game_info
{
	char	**map;

	int		p_row;
	int		p_col;

	int		movements;

	int		width;
	int		height;

	int		collect_num;
	int		exit_num;
	int		player_num;

	char	*map_doc;

	void	*mlx;
	void	*mlx_win;
	int		img_width;
	int		img_height;
	t_data	img;
	void	*wall;
	void	*floor;
	void	*door;
	void	*open_door;
	void	*player;
	void	*collect;
}	t_game_info;

int		count_lines(char *map_doc);
char	**read_map(char *map_doc, int height);
int		get_width(char *row);
void	get_map(t_game_info	*info);
int		is_rectangle(char **map);
int		is_apt(t_game_info *info);
int		is_closed(t_game_info *info);
void	init_data(t_game_info *info);
int		is_propper(t_game_info *info);

int		is_playable(t_game_info *info);
void	paint_map(t_game_info *info);
void	paint_columns(char **map, t_intersection	*i);
void	paint_rows(char **map, t_intersection	*i, int x);
int		is_surrounded(char **map, int row, int col);
void	new_intersection(t_intersection *nodos, int row, int col);
void	*pop_intersection(t_intersection *i);
void	configure_info(t_game_info *info);
int		redraw_map(t_game_info *info);
int		is_elements(t_game_info *info);
int		is_ber(char *doc);
int		event_key(int keycode, t_game_info *info);
int		exit_game(t_game_info *info);
int		free_matrix(t_game_info *info);

void	draw_left(int row, t_game_info *info);
void	draw_down(int col, t_game_info *info);
void	draw_right(int row, t_game_info *info);
void	draw_up(int col, t_game_info *info);
#endif