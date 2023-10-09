/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoto-gu <acoto-gu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 11:39:21 by acoto-gu          #+#    #+#             */
/*   Updated: 2023/10/03 10:34:49 by acoto-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_p(void *p)
{
	if (!p)
	{
		ft_print_str("0x0");
		return (3);
	}
	ft_print_str("0x");
	return (2 + ft_putnbr_base_u((long)p, "0123456789abcdef"));
}
