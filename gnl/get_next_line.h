/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 01:30:34 by alejsanc          #+#    #+#             */
/*   Updated: 2022/11/10 01:30:38 by alejsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

typedef struct s_list
{
	char			*line;
	int				size_l;
	struct s_list	*next;
}	t_list;

typedef struct s_node
{
	t_list	*list;
	char	*content;
	int		print;
	int		error;
	int		size_c;
}	t_node;

char	*get_next_line(int fd);
void	read_fd(t_node *node, int fd);
char	*return_line(t_node *node);
void	feed_content(t_node *node, int start, int end, char	*buffer);
void	norminette_line(t_node *node, t_list *line, t_list *aux);
void	add_line(t_node *node, int start, int end, char *buffer);
void	norminette_core(t_node *node, int *norminette, char *buffer);

#endif
