/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_ber.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejsanc <alejsanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 20:03:16 by alejsanc          #+#    #+#             */
/*   Updated: 2024/07/11 18:54:55 by alejsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	is_ber(char *doc)
{
	char	*type_d;
	int		start;

	type_d = ".ber";
	start = ft_strlen(doc) - 4;
	while (doc[start])
	{
		if (doc[start] != *type_d)
			return (ft_printf("Error\nFormato incorrecto"), 0);
		start++;
		type_d++;
	}
	return (1);
}
