/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_lines.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejsanc <alejsanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 19:45:46 by alejsanc          #+#    #+#             */
/*   Updated: 2024/11/22 15:15:00 by alejsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	count_lines(char *map_doc)
{
	int		cont;
	char	*line;
	int		fd;

	fd = open(map_doc, O_RDONLY);
	if (fd < 0)
	{
		ft_printf("Error\nEl archivo no existe");
		exit(EXIT_SUCCESS);
	}
	cont = 0;
	line = get_next_line(fd);
	while (line)
	{
		free(line);
		line = get_next_line(fd);
		cont++;
	}
	close(fd);
	return (cont);
}
