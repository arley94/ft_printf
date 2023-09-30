/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoto-gu <acoto-gu@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:50:09 by acoto-gu          #+#    #+#             */
/*   Updated: 2023/09/30 02:11:11 by acoto-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		char_count;

	char_count = 0;
	va_start(ap, str);
	while (*str)
	{
		if (*str == '%')
		{
			char_count += ft_print_format(*++str, ap);
			str++;
		}
		else
			char_count += ft_print_char(*str++);
	}
	va_end(ap);
	return (char_count);
}

	// while (*str)
	// 	switch (*str++) 
	// 	{
	// 		case 's':	      /* string */
	// 		s = va_arg(ap, char *);
	// 		printf("string %s\n", s);
	// 		break;
	// 		case 'd':	      /* int */
	// 		d = va_arg(ap, int);
	// 		printf("int %d\n", d);
	// 		break;
	// 		case 'c':	      /* char */
	// 		/* need a cast here since va_arg only
	// 			takes fully promoted types */
	// 		c = (char) va_arg(ap, int);
	// 		printf("char %c\n", c);
	// 		break;
	// 	}
	// va_end(ap);
