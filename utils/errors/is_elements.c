/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_elements.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejsanc <alejsanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:23:06 by alejsanc          #+#    #+#             */
/*   Updated: 2024/07/11 18:55:20 by alejsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	is_elements(t_game_info *info)
{
	int	row;
	int	column;

	row = 0;
	while (info->map[row])
	{
		column = 0;
		while (info->map[row][column] && info->map[row][column] != '\n')
		{
			if (info->map[row][column] != '0' &&
				(info->map[row][column] != '1') &&
				(info->map[row][column] != 'P') &&
				(info->map[row][column] != 'E') &&
				(info->map[row][column] != 'C'))
			{
				ft_printf("Error\nEl mapa tiene elementos no soportados");
				return (0);
			}
			column++;
		}
		row++;
	}
	return (1);
}
