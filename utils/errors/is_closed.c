/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_closed.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejsanc <alejsanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 23:12:09 by alejsanc          #+#    #+#             */
/*   Updated: 2024/07/11 18:55:12 by alejsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	is_closed(t_game_info *info)
{
	int	c;

	c = 0;
	while (info->map[0][c] != '\0' && info->map[0][c] != '\n')
	{
		if (info->map[0][c] != '1' || info->map[info->height - 1][c] != '1')
		{
			ft_printf("Error\nEl mapa no esta cerrado correctamente\n");
			return (0);
		}
		c++;
	}
	c = 0;
	while (info->map[c])
	{
		if (info->map[c][0] != '1' || info->map[c][info->width - 1] != '1')
		{
			ft_printf("Error\nEl mapa no esta cerrado correctamente");
			return (0);
		}
		c++;
	}
	return (1);
}
