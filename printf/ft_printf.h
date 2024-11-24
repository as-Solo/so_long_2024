/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 21:12:44 by alejsanc          #+#    #+#             */
/*   Updated: 2023/01/24 21:12:47 by alejsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

int				ft_printf(char const *text, ...);
int				ft_putchar(char c);
int				ft_putstr(char	*s);
int				ft_putmem(void	*p);
int				ft_putnbr(int n);
int				ft_putnbrbase(unsigned int n, char *base);
int				ft_puthexa(unsigned long int n);
unsigned int	ft_strlen(const char *str);

#endif
