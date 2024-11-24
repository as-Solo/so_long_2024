/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   configure_info.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejsanc <alejsanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:05:16 by alejsanc          #+#    #+#             */
/*   Updated: 2024/11/22 15:10:44 by alejsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	configure_info(t_game_info *info)
{
	info->img_width = 0;
	info->img_height = 0;
	info->img.img = mlx_new_image(info->mlx,
			64 * info->width, 64 * info->height);
	info->img.addr = mlx_get_data_addr(info->img.img, &info->img.bits_per_pixel,
			&info->img.line_length, &info->img.endian);
	info->wall = mlx_xpm_file_to_image(info->mlx,
			"./sprites/ladrillo.xpm", &info->img_width, &info->img_height);
	info->floor = mlx_xpm_file_to_image(info->mlx,
			"./sprites/floor.xpm", &info->img_width, &info->img_height);
	info->door = mlx_xpm_file_to_image(info->mlx,
			"./sprites/door.xpm", &info->img_width, &info->img_height);
	info->open_door = mlx_xpm_file_to_image(info->mlx,
			"./sprites/open_door.xpm", &info->img_width, &info->img_height);
	info->player = mlx_xpm_file_to_image(info->mlx,
			"./sprites/hobbit.xpm", &info->img_width, &info->img_height);
	info->collect = mlx_xpm_file_to_image(info->mlx,
			"./sprites/collect.xpm", &info->img_width, &info->img_height);
	if (info->wall == NULL || info->floor == NULL || info->door == NULL
		|| info->open_door == NULL || info->player == NULL || info->collect
		== NULL)
	{
		ft_printf("Error\nNo tienes permisos para usar estas imagenes.\n");
		exit(1);
	}
}
