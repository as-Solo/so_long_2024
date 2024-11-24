/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_game.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejsanc <alejsanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 21:26:01 by alejsanc          #+#    #+#             */
/*   Updated: 2024/07/09 20:19:39 by alejsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	exit_game(t_game_info *info)
{
	free_matrix(info);
	mlx_destroy_window(info->mlx, info->mlx_win);
	exit(EXIT_SUCCESS);
	return (0);
}
