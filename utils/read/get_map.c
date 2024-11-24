/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejsanc <alejsanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 21:25:13 by alejsanc          #+#    #+#             */
/*   Updated: 2024/11/22 15:14:36 by alejsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	get_map(t_game_info	*info)
{
	info->height = count_lines(info->map_doc);
	info->map = read_map(info->map_doc, info->height);
	info->width = get_width(info->map[0]);
}
