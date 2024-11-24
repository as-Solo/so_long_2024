/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paint_columns.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejsanc <alejsanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 19:37:26 by alejsanc          #+#    #+#             */
/*   Updated: 2024/11/24 21:33:03 by alejsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	paint_columns(char **map, t_intersection	*i)
{
	int	x;

	x = i->row;
	while (map[x][i->col] != '1')
	{
		if (map[x][i->col] == 'E')
			map[x][i->col] = '1';
		else
		{
			paint_rows(map, i, x);
			x++;
		}
	}
	x = i->row - 1;
	while (map[x][i->col] != '1')
	{
		if (map[x][i->col] == 'E')
			map[x][i->col] = '1';
		else
		{
			paint_rows(map, i, x);
			x--;
		}
	}
}
