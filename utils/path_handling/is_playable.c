/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_playable.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejsanc <alejsanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 19:37:42 by alejsanc          #+#    #+#             */
/*   Updated: 2024/07/11 18:55:55 by alejsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	is_playable(t_game_info *info)
{
	int	row;
	int	column;

	row = 0;
	paint_map(info);
	while (info->map[row] != NULL)
	{
		column = 0;
		while (info->map[row][column] != '\0')
		{
			if (info->map[row][column] == 'C' || info->map[row][column] == 'E')
			{
				ft_printf("Error\nNo hay un camino válido disponible");
				return (0);
			}
			column++;
		}
		row++;
	}
	free_matrix(info);
	return (1);
}
