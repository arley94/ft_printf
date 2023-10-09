/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_u.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoto-gu <acoto-gu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:00:31 by acoto-gu          #+#    #+#             */
/*   Updated: 2023/10/09 13:09:17 by acoto-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base_u(unsigned long int nb, char *base)
{
	unsigned long int	base_len;
	int					char_count;

	char_count = 0;
	base_len = (unsigned long int) ft_strlen(base);
	if (base_len >= 2)
	{
		if (nb >= base_len)
			char_count += ft_putnbr_base_u(nb / base_len, base);
		write(1, base + (nb % base_len), 1);
		return (1 + char_count);
	}
	return (0);
}
