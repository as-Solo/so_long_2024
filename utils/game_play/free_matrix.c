/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_matrix.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejsanc <alejsanc@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 21:36:36 by alejsanc          #+#    #+#             */
/*   Updated: 2023/10/19 21:36:36 by alejsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	free_matrix(t_game_info *info)
{
	int	cont;

	cont = 0;
	while (cont < info->height)
	{
		free(info->map[cont]);
		cont++;
	}
	free (info->map);
	return (0);
}
