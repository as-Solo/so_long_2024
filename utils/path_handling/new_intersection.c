/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_intersection.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejsanc <alejsanc@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 19:37:22 by alejsanc          #+#    #+#             */
/*   Updated: 2023/09/21 00:01:59 by alejsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	new_intersection(t_intersection *nodos, int row, int col)
{
	t_intersection	*new;

	new = malloc(sizeof(t_intersection));
	if (new != NULL)
	{
		new->row = row;
		new->col = col;
		new->next = NULL;
		while (nodos->next != NULL)
			nodos = nodos->next;
		nodos->next = new;
	}
}
