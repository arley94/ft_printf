/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftprintf.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoto-gu <acoto-gu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 08:56:35 by acoto-gu          #+#    #+#             */
/*   Updated: 2023/09/29 09:56:10 by acoto-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FTPRINTF_H
# define FTPRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

/* ************************************************************************** */
/*                                 STRUCT                                     */
/* ************************************************************************** */



/* ************************************************************************** */
/*                          FUNCTIONS PROTOTYPES                              */
/* ************************************************************************** */

void	ft_printf(const char *str, ...);
void	ft_print_char(char c);
void	ft_print_str(char *s);
void	ft_putnbr_base(int nbr, char *base);

#endif