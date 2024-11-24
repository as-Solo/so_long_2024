/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_rectangle.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejsanc <alejsanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 21:33:59 by alejsanc          #+#    #+#             */
/*   Updated: 2024/07/11 18:55:32 by alejsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	is_rectangle(char **map)
{
	int	cont;

	cont = 1;
	while (map[cont])
	{
		if (get_width(map[cont]) != get_width(map[0]))
		{
			ft_printf("Error\nEl mapa no es rectangular\n");
			return (0);
		}
		cont++;
	}
	return (1);
}
