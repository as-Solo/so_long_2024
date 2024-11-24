/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 21:10:48 by alejsanc          #+#    #+#             */
/*   Updated: 2023/01/24 21:10:57 by alejsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	cont;

	cont = 0;
	if (!s)
		return (ft_putstr("(null)"));
	if (s != NULL && s[cont] != '\0')
	{
		while (s[cont] != '\0')
		{
			write (1, &s[cont], 1);
			cont++;
		}
	}
	return (cont);
}

/*
int main(void)
{
	//printf("%i", ft_putstr(""));
	ft_putstr(NULL);
	return (0);
}
*/