/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paint_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejsanc <alejsanc@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 19:37:29 by alejsanc          #+#    #+#             */
/*   Updated: 2023/10/19 20:00:40 by alejsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	paint_map(t_game_info *info)
{
	t_intersection	*i;

	i = malloc(sizeof(t_intersection));
	i->row = info->p_row;
	i->col = info->p_col;
	i->next = NULL;
	while (i != NULL)
	{
		if (is_surrounded(info->map, i->row, i->col))
		{
			paint_columns(info->map, i);
			i = pop_intersection(i);
		}
		else
			i = pop_intersection(i);
	}
	free(i);
}
