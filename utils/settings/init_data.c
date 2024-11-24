/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_data.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejsanc <alejsanc@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 23:24:26 by alejsanc          #+#    #+#             */
/*   Updated: 2023/09/20 23:24:29 by alejsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	init_data(t_game_info *info)
{
	info->p_row = 0;
	info->p_col = 0;
	info->movements = 0;
	info->width = 0;
	info->height = 0;
	info->collect_num = 0;
	info->exit_num = 0;
	info->player_num = 0;
}
