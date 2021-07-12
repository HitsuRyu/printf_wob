#include "ft_printf.h"

char	*ft_itoa_base(unsigned int n, int base)
{
	char			*buf;
	char			*sym;
	char			*tmp;
	char			*line;

	buf = "0123456789abcdef";
	if (n == 0)
		return (ft_strdup("0"));
	line = ft_strdup("");
	while (n > 0)
	{
		sym = ft_substr(buf, n % base, 1);
		tmp = line;
		line = ft_strjoin(sym, line);
		free(tmp);
		free(sym);
		n = n / base;
	}
	return (line);
}

char	*ft_itoa_base_p(unsigned long n, int base)
{
	char			*buf;
	char			*sym;
	char			*tmp;
	char			*line;

	buf = "0123456789abcdef";
	if (n == 0)
		return (ft_strdup("0x0"));
	line = ft_strdup("");
	while (n > 0)
	{
		sym = ft_substr(buf, n % base, 1);
		tmp = line;
		line = ft_strjoin(sym, line);
		free(tmp);
		free(sym);
		n = n / base;
	}
	tmp = line;
	line = ft_strjoin("0x", line);
	free(tmp);
	return (line);
}
