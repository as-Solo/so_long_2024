/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop_intersection.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejsanc <alejsanc@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 19:37:38 by alejsanc          #+#    #+#             */
/*   Updated: 2023/09/19 22:52:50 by alejsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	*pop_intersection(t_intersection *i)
{
	void	*aux;

	aux = i->next;
	free(i);
	return (aux);
}
