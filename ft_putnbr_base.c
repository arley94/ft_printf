/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoto-gu <acoto-gu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:24:52 by acoto-gu          #+#    #+#             */
/*   Updated: 2023/09/28 16:49:56 by acoto-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftprintf.h"

void	ft_putnbr_base(int nbr, char *base)
{
	long int	base_len;
	long int	nb;

	nb = (long int) nbr;
	base_len = (long int) ft_strlen(base);
	if (base_len != 0)
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb = nb * -1;
		}
		if (nb >= base_len)
			ft_putnbr_base(nb / base_len, base);
		write(1, base + (nb % base_len), 1);
	}
}
