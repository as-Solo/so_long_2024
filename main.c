/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejsanc <alejsanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 23:32:39 by alejsanc          #+#    #+#             */
/*   Updated: 2024/11/22 16:38:56 by alejsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char *argv[])
{
	t_game_info	info;

	if (argc == 2)
	{
		init_data(&info);
		info.map_doc = argv[1];
		get_map(&info);
		if (is_propper(&info))
		{
			if (is_playable(&info))
			{
				get_map(&info);
				info.mlx = mlx_init();
				info.mlx_win = mlx_new_window(info.mlx, 64 * info.width,
						64 * info.height, "SO_LONG");
				configure_info(&info);
				mlx_loop_hook(info.mlx, redraw_map, &info);
				mlx_hook(info.mlx_win, 17, 0, exit_game, &info);
				mlx_hook(info.mlx_win, 2, 1L << 0, event_key, &info);
				mlx_loop(info.mlx);
			}
		}
	}
	exit(EXIT_SUCCESS);
	return (0);
}
