#include "ft_printf.h"

int	ft_print_p(void *arg)
{
	unsigned long	u;
	char			*line;
	int				len;

	u = (unsigned long)arg;
	line = ft_itoa_base_p(u, 16);
	len = ft_strlen(line);
	write(1, line, len);
	free(line);
	return (len);
}

int	ft_print_d_i(int arg)
{
	char	*buf;
	int		len;

	buf = ft_itoa(arg);
	len = ft_strlen(buf);
	write(1, buf, len);
	free(buf);
	return (len);
}

int	ft_print_u(unsigned int u)
{
	char	*buf;
	int		len;

	buf = ft_itoa_base(u, 10);
	len = ft_strlen(buf);
	write(1, buf, len);
	free(buf);
	return (len);
}

int	ft_print_x(unsigned int u)
{
	char	*line;
	int		len;

	line = ft_itoa_base(u, 16);
	len = ft_strlen(line);
	write(1, line, len);
	free(line);
	return (len);
}

int	ft_print_X(unsigned int u)
{
	char	*line;
	char	*tmp;
	int		len;

	line = ft_itoa_base(u, 16);
	tmp = line;
	while (*tmp)
	{
		*tmp = ft_toupper(*tmp);
		tmp++;
	}
	len = ft_strlen(line);
	write(1, line, len);
	free(line);
	return (len);
}
