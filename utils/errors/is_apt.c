/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_apt.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejsanc <alejsanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 21:58:37 by alejsanc          #+#    #+#             */
/*   Updated: 2024/07/11 18:54:01 by alejsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	set_player(t_game_info *info, int row, int column)
{
	info->p_row = row;
	info->p_col = column;
	info->player_num++;
}

int	is_apt(t_game_info *info)
{
	int	row;
	int	column;

	row = 0;
	while (info->map[row])
	{
		column = 0;
		while (info->map[row][column])
		{
			if (info->map[row][column] == 'P')
				set_player(info, row, column);
			else if (info->map[row][column] == 'E')
				info->exit_num++;
			else if (info->map[row][column] == 'C')
				info->collect_num++;
			column++;
		}
		row++;
	}
	if (info->collect_num < 1 || info->player_num != 1 || info->exit_num != 1)
	{
		ft_printf("Error\nEl mapa no tiene los elementos necesarios.\n");
		return (0);
	}
	return (1);
}
