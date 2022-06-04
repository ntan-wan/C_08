#include <unistd.h>
#include "ft_stock_str.h"

void	putchar(char c)
{
	write(1, &c, 1);
}

void	putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	write(1, str, i);
}

void	putnbr(int num)
void	ft_show_tab(struct s_stock_str *par)
{
		
}
