/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejsanc <alejsanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 19:58:15 by alejsanc          #+#    #+#             */
/*   Updated: 2024/11/22 15:15:11 by alejsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	**read_map(char *map_doc, int height)
{
	int		cont;
	char	**map;
	int		fd;

	map = malloc(sizeof(char *) * (height + 1));
	if (map == NULL)
		return (NULL);
	fd = open(map_doc, O_RDONLY);
	cont = 0;
	while (cont < height)
	{
		map[cont] = get_next_line(fd);
		cont++;
	}
	map[cont] = NULL;
	close(fd);
	return (map);
}
