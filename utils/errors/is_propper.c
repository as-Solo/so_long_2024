/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_propper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejsanc <alejsanc@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:37:36 by alejsanc          #+#    #+#             */
/*   Updated: 2023/10/19 20:10:15 by alejsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	is_propper(t_game_info *info)
{
	return (is_ber(info->map_doc) * is_apt(info) * is_rectangle(info->map)
		* is_closed(info) * is_elements(info));
}
