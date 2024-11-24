/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejsanc <alejsanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 01:30:21 by alejsanc          #+#    #+#             */
/*   Updated: 2024/07/09 18:37:35 by alejsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*return_line(t_node *node)
{
	char	*aux;
	t_list	*aux_node;

	aux_node = node->list;
	aux = node->list->line;
	node->list = node->list->next;
	free (aux_node);
	node->print -= 1;
	return (aux);
}

void	feed_content(t_node *node, int start, int end, char	*buffer)
{
	char	*aux;
	int		index;
	int		size_c;

	size_c = ((end - start) + node->size_c);
	aux = malloc(sizeof(char) * ((end - start) + node->size_c + 1));
	if (aux == NULL)
	{
		node->error = 1;
		return ;
	}
	index = 0;
	while (index < node->size_c)
	{
		aux[index] = node->content[index];
		index++;
	}
	while (start < end)
		aux[index++] = buffer[start++];
	aux[index] = '\0';
	if (node->size_c > 0)
		free(node->content);
	node->size_c = size_c;
	node->content = aux;
}

void	norminette_line(t_node *node, t_list *line, t_list *aux)
{
	if (!node->list)
	{
		node->list = line;
		aux = node->list;
	}
	else
	{
		while (aux->next)
			aux = aux->next;
		aux->next = line;
	}
	if (node->size_c > 0)
	{
		node->size_c = 0;
		free(node->content);
	}
}

void	add_line(t_node *node, int start, int end, char *buffer)
{
	t_list	*line;
	int		index;
	t_list	*aux;

	index = 0;
	line = malloc(sizeof(t_list) * 1);
	if (line != NULL)
		line->line = malloc(sizeof(char) * ((end - start) + node->size_c + 1));
	if (line == NULL || line->line == NULL)
	{
		node->error = 1;
		return ;
	}
	line->size_l = ((end - start) + node->size_c);
	line->next = NULL;
	aux = node->list;
	while (index < node->size_c)
	{
		line->line[index] = node->content[index];
		index++;
	}
	while (start < end)
		line->line[index++] = buffer[start++];
	line->line[index] = '\0';
	norminette_line (node, line, aux);
}

void	norminette_core(t_node *node, int *norminette, char *buffer)
{
	if (norminette[2] == -1 || (norminette[2] == 0 && node->size_c < 1))
	{
		free (buffer);
		node->error = 1;
		return ;
	}
	buffer[norminette[2]] = '\0';
	while (buffer[norminette[0]])
	{
		if (buffer[norminette[0]++] == '\n')
		{
			add_line(node, norminette[1], norminette[0], buffer);
			norminette[1] = norminette[0];
			node->print += 1;
		}
	}
	if ((norminette[2] == 0 && node->size_c > 0) || (norminette[2]
			< BUFFER_SIZE && buffer[norminette[0] -1] != '\n'))
	{
		node->print += 1;
		add_line(node, norminette[1], norminette[0], buffer);
	}
	else if (norminette[1] != norminette[0])
		feed_content(node, norminette[1], norminette[0], buffer);
	free(buffer);
}
