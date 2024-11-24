/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_surrounded.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejsanc <alejsanc@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 19:37:19 by alejsanc          #+#    #+#             */
/*   Updated: 2023/10/19 20:01:46 by alejsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	is_surrounded(char **map, int row, int col)
{
	if (map[row - 1][col] == '0' || map[row - 1][col] == 'C'
		|| map[row - 1][col] == 'E')
		return (1);
	else if (map[row + 1][col] == '0' || map[row + 1][col] == 'C'
		|| map[row - 1][col] == 'E')
		return (1);
	else if (map[row][col - 1] == '0' || map[row][col - 1] == 'C'
		|| map[row - 1][col] == 'E')
		return (1);
	else if (map[row][col + 1] == '0' || map[row][col + 1] == 'C'
		|| map[row - 1][col] == 'E')
		return (1);
	return (0);
}
