#include "ft_printf.h"

int	ft_print_c(unsigned int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_print_percent(void)
{
	write(1, "%", 1);
	return (1);
}

int	ft_print_s(char *arg)
{
	int		len;

	if (!arg)
		arg = "(null)";
	len = ft_strlen(arg);
	write(1, arg, len);
	return (len);
}
