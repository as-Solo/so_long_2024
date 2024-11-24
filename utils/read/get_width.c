/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_width.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejsanc <alejsanc@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 20:34:19 by alejsanc          #+#    #+#             */
/*   Updated: 2023/09/20 21:27:34 by alejsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	get_width(char *row)
{
	int	width;

	width = 0;
	while (row[width] != '\0' && row[width] != '\n')
		width++;
	return (width);
}
