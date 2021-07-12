#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int			len;
	va_list		pa;

	va_start(pa, str);
	len = 0;
	while (*str)
	{
		if (*str != '%')
		{
			write(1, str, 1);
			len++;
			str++;
		}
		else
		{
			str++;
			len += ft_print_unformatted(str, &pa);
			str++;
		}
	}
	va_end(pa);
	return (len);
}

int	ft_print_unformatted(const char *str, va_list *pa)
{
	int	len;

	len = 0;
	if (*str == 'c')
		len += ft_print_c(va_arg(*pa, unsigned int));
	if (*str == 's')
		len += ft_print_s(va_arg(*pa, char *));
	if (*str == 'p')
		len += ft_print_p(va_arg(*pa, void *));
	if (*str == 'd' || *str == 'i')
		len += ft_print_d_i(va_arg(*pa, int));
	if (*str == 'u')
		len += ft_print_u(va_arg(*pa, unsigned int));
	if (*str == 'x')
		len += ft_print_x(va_arg(*pa, unsigned int));
	if (*str == 'X')
		len += ft_print_X(va_arg(*pa, unsigned int));
	if (*str == '%')
		len += ft_print_percent();
	return (len);
}
