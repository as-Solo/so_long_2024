/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paint_rows.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejsanc <alejsanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 19:37:32 by alejsanc          #+#    #+#             */
/*   Updated: 2024/11/24 20:48:03 by alejsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	paint_row_normi(char **map, t_intersection	*i, int x, int dir)
{
	int	aux;

	aux = i->col;
	if (dir > 0)
		aux++;
	while (map[x][aux] != '1')
	{
		if (map[x][aux] == 'E')
			map[x][aux] = '1';
		else
		{
			map[x][aux] = 'P';
			if (is_surrounded(map, x, aux))
				new_intersection(i, x, aux);
			aux = aux + dir;
		}
	}
}

void	paint_rows(char **map, t_intersection	*i, int x)
{
	paint_row_normi(map, i, x, 1);
	paint_row_normi(map, i, x, -1);
}
