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

int	verif_size_map(char *str)
{
	int i;
	int count;
	int res;

	i = 6;
	count = 0;
	res = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\n')
		{
			i++;
			count++;
		}
		res = count;
		count = 0;
		while (str[i] != '\n')
		{
			i++;
			count++;
		}
		if (res != count)
			ft_putstr("FAUX");
		i++;
	}
	return (1);

}

int	to_buff(char *str)
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
		if (!verif_size_map(buf))
			ft_putstr("map error\n");
		ft_putchar('\n');
		ft_putstr(buf);
		if (close(fd) == -1)
		{
			ft_putstr("Close error\n");
			return (1);
		}
		return (0);

}



int	main(int ac, char **av)
{
	if (ac == 2)
	{
		if (to_buff(av[1]) == 1)
			ft_putstr("MAP valide MON SAUCE\n");
	}
}
