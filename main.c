/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davpinto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 11:43:22 by davpinto          #+#    #+#             */
/*   Updated: 2020/08/25 18:54:11 by davpinto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdio.h>

int	get_map(char *str, char ***res)
{
		int fd;
		int ret;
		char buf[10001];

		fd = open(str, O_RDONLY);
		if (fd == -1)
		{
			ft_putstr("open error \n");
			return (1);
		}
		ret = read(fd, buf,10000);
		buf[ret] = '\0';
		*res = ft_split(buf, "\n");
		if (close(fd) == -1)
		{
			ft_putstr("Close error\n");
			return (1);
		}
		return (0);

}

void	print_map(char **map)
{
	int	i = 0;

	while (map[i] != NULL)
	{
		ft_putstr(map[i]);
		ft_putchar('\n');
		i++;
	}
}

int	main(int ac, char **av)
{
	char 	**res;
	char	*line;

	if (ac == 2)
	{
		if (get_map(av[1], &res) == 1)
			ft_putstr("MAP valide MON SAUCE\n");
	}
	line = res[0];
	res = res + 1;
	print_map(res);
}
