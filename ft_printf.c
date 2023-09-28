/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoto-gu <acoto-gu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:50:09 by acoto-gu          #+#    #+#             */
/*   Updated: 2023/09/28 16:50:35 by acoto-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftprintf.h"

void	ft_printf(const char *str, ...)
{
	// va_list ap;

	// va_start(ap, str);
	while (*str)
	{
		ft_putchar_fd(*str, 1);
		str++;
	}
}
