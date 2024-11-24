/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejsanc <alejsanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 01:30:08 by alejsanc          #+#    #+#             */
/*   Updated: 2024/07/09 19:59:35 by alejsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	read_fd(t_node *node, int fd)
{
	int		norminette[3];
	char	*buffer;

	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (buffer == NULL)
	{
		node->error = 1;
		return ;
	}
	norminette[0] = 0;
	norminette[1] = 0;
	norminette[2] = read(fd, buffer, BUFFER_SIZE);
	norminette_core(node, norminette, buffer);
}

char	*get_next_line(int fd)
{
	static t_node	node = {.list = NULL, .content = NULL,
		.print = 0, .error = 0};

	if (read(fd, NULL, 0) == -1)
		return (NULL);
	while (node.print == 0 && node.error == 0)
		read_fd(&node, fd);
	if (node.print > 0 && node.error == 0)
		return (return_line(&node));
	node.error = 0;
	return (NULL);
}
