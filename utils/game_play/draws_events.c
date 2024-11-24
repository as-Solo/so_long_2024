/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draws_events.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejsanc <alejsanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 22:27:03 by alejsanc          #+#    #+#             */
/*   Updated: 2024/07/09 22:40:56 by alejsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	draw_left(int row, t_game_info *info)
{
	info->map[row][info->p_col] = '0';
	info->p_col--;
	info->map[info->p_row][info->p_col] = 'P';
	info->movements++;
	ft_printf
		("Giraste a la izquierda!!!  Tu numero de movimientos es %i\n",
			info->movements);
}

void	draw_down(int col, t_game_info *info)
{
	info->map[info->p_row][col] = '0';
	info->p_row++;
	info->map[info->p_row][info->p_col]
		= 'P';
	info->movements++;
	ft_printf
		("Bajaste!!!  Tu numero de movimientos es %i\n", info->movements);
}

void	draw_right(int row, t_game_info *info)
{
	info->map[row][info->p_col] = '0';
	info->p_col++;
	info->map[info->p_row][info->p_col]
		= 'P';
	info->movements++;
	ft_printf
		("Giraste a la derecha!!!  Tu numero de movimientos es %i\n",
			info->movements);
}

void	draw_up(int col, t_game_info *info)
{
	info->map[info->p_row][col] = '0';
	info->p_row--;
	info->map[info->p_row][info->p_col]
		= 'P';
	info->movements++;
	ft_printf
		("Subiste!!!  Tu numero de movimientos es %i\n", info->movements);
}
