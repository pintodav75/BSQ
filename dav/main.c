/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davpinto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 11:43:22 by davpinto          #+#    #+#             */
/*   Updated: 2020/08/26 19:18:27 by davpinto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdio.h>

int	check_map(char **map);

int	get_map(char *str, char ***res, int in)
{
	int fd;
	int ret;
	char buf[100000];

	if (in != 1)
		fd = open(str, O_RDONLY);
	else
		fd = 0;
	if (fd == -1)
		return (1);
	ret = read(fd, buf, 100000);
	buf[ret] = '\0';
	*res = ft_split(buf, "\n");
	if (in != 1 && close(fd) == -1)
		return (1);
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

int	check(char **res, char *line)
{
	if(!(check_line(line)))
		return (1);	
	if (!(is_printable(line)))
		return (1);
	if (!(check_alpha(res, line)))
		return (1);
	if (!(check_len_map(res, line)))
		return (1);
	if (!(check_strings_len(res)))
		return (1);
	return 0;
}


int	get_map_in(char ***res)
{
	return (0);
}

int	main(int ac, char **av)
{
	char 	**res = NULL;
	char	*line = NULL;
	int i;

	i = 1;
	if (ac == 1)
	{
		if (get_map(NULL, &res, ac) == 1)
		{
			ft_putstr("caca bizaree\n");
			return (0);
		}
		line = res[0];
		res = res + 1;
		if (check(res, line))
			ft_putstr("caca\n");
		else
			ft_putstr("good\n");
		return 0;
	}
	else
	{
		while (i < ac)
		{
			if (get_map(av[i], &res, ac) == 1)
			{
				ft_putstr("caca bizaree\n");
				i++;
				continue;
			}
			line = res[0];
			res = res + 1;
			if (check(res, line))
				ft_putstr("caca\n");
			else
				ft_putstr("good\n");
			i++;
		}
	}
}

