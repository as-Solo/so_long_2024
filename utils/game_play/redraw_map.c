/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   redraw_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejsanc <alejsanc@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 19:08:43 by alejsanc          #+#    #+#             */
/*   Updated: 2023/10/19 21:35:43 by alejsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	normi_image_to_window(int x, int y, t_game_info *info, void *image)
{
	mlx_put_image_to_window(info->mlx,
		info->mlx_win, image, y * 64, x * 64);
}

void	normi_put_image(int row, int col, t_game_info *info)
{
	if (info->map[row][col] == '1')
		normi_image_to_window(row, col, info, info->wall);
	else if (info->map[row][col] == 'E')
	{
		if (info->collect_num == 0)
			normi_image_to_window(row, col, info, info->open_door);
		else
			normi_image_to_window(row, col, info, info->door);
	}
	else if (info->map[row][col] == 'C')
		normi_image_to_window(row, col, info, info->collect);
	else if (info->map[row][col] == 'P')
	{
		normi_image_to_window(row, col, info, info->floor);
		normi_image_to_window(row, col, info, info->player);
	}
	else
		normi_image_to_window(row, col, info, info->floor);
}

int	redraw_map(t_game_info *info)
{
	int	row;
	int	col;

	row = 0;
	while (row < info->height)
	{
		col = 0;
		while (col < info->width)
		{
			normi_put_image(row, col, info);
			col++;
		}
		row++;
	}
	return (0);
}
