#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include "libft/libft.h"

int		ft_printf(const char *str, ...);
int		ft_print_unformatted(const char *str, va_list *pa);
int		ft_print_c(unsigned int c);
int		ft_print_s(char *str);
int		ft_print_p(void *arg);
int		ft_print_d_i(int arg);
int		ft_print_u(unsigned int u);
int		ft_print_x(unsigned int u);
int		ft_print_X(unsigned int u);
int		ft_print_percent(void);
char	*ft_itoa_base(unsigned int n, int base);
char	*ft_itoa_base_p(unsigned long n, int base);

#endif