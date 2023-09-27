
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
