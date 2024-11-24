/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   event_key.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejsanc <alejsanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 21:36:51 by alejsanc          #+#    #+#             */
/*   Updated: 2024/11/24 20:39:08 by alejsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	turn_left(t_game_info *info)
{
	int	row;
	int	col;

	row = info->p_row;
	col = info->p_col - 1;
	if (info->map[row][col] != '1' && info->map[row][col] != 'E')
	{
		if (info->map[row][col] == 'C')
			info->collect_num--;
		draw_left(row, info);
	}
	else if (info->map[row][col] == 'E' && info->collect_num == 0)
	{
		draw_left(row, info);
		ft_printf("Ganaste!!!\n");
		exit_game(info);
	}
}

void	turn_down(t_game_info *info)
{
	int	row;
	int	col;

	row = info->p_row + 1;
	col = info->p_col;
	if (info->map[row][col] != '1' && info->map[row][col] != 'E')
	{
		if (info->map[row][col] == 'C')
			info->collect_num--;
		draw_down(col, info);
	}
	else if (info->map[row][col] == 'E' && info->collect_num == 0)
	{
		draw_down(col, info);
		ft_printf("Ganaste!!!\n");
		exit_game(info);
	}
}

void	turn_right(t_game_info *info)
{
	int	row;
	int	col;

	row = info->p_row;
	col = info->p_col + 1;
	if (info->map[row][col] != '1' && info->map[row][col] != 'E')
	{
		if (info->map[row][col] == 'C')
			info->collect_num--;
		draw_right(row, info);
	}
	else if (info->map[row][col] == 'E' && info->collect_num == 0)
	{
		draw_right(row, info);
		ft_printf("Ganaste!!!\n");
		exit_game(info);
	}
}

void	turn_up(t_game_info *info)
{
	int	row;
	int	col;

	row = info->p_row - 1;
	col = info->p_col;
	if (info->map[row][col] != '1' && info->map[row][col] != 'E')
	{
		if (info->map[row][col] == 'C')
			info->collect_num--;
		draw_up(col, info);
	}
	else if (info->map[row][col] == 'E' && info->collect_num == 0)
	{
		draw_up(col, info);
		ft_printf("Ganaste!!!\n");
		exit_game(info);
	}
}

int	event_key(int keycode, t_game_info *info)
{
	if (keycode == 65307)
		exit_game(info);
	else if (keycode == 65361)
		turn_left(info);
	else if (keycode == 65364)
		turn_down(info);
	else if (keycode == 65363)
		turn_right(info);
	else if (keycode == 65362)
		turn_up(info);
	return (0);
}
