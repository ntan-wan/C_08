#include <stdlib.h>

int	str_length(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char 	*str_copy(char *src)
{
	int	i;
	int	src_length;
	char	*dest;

	i = 0;
	while (src[i])
		i++;
	src_length = i;
	dest = malloc(sizeof(char) * (src_length + 1));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*arr;
	int		i;

	arr = malloc(sizeof(t_stock_str) * (ac + 1));
	i = 0;
	if (arr == NULL)
		return (NULL);
	while (i < ac)
	{
		arr[i].size = str_length(av[i]);
		arr[i].str = av[i];
		arr[i].copy = str_copy(av[i]);
		i++;
	}
	arr[i].str = 0;
	return (arr);
}
