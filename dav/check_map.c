/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davpinto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/26 12:04:27 by davpinto          #+#    #+#             */
/*   Updated: 2020/08/26 19:24:36 by davpinto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	check_strings_len(char **map)
{
	int i;
	int res;
	int res1;

	i = 1;
	res = ft_strlen(map[0]);
	res1 = ft_strlen(map[0]);
	while ( map[i] != NULL)
	{
		if (res != res1)
			return (0);
		res = ft_strlen(map[i]);
		i++;
	}
	return (1);
}

int	check_len_map(char **map, char *line)
{
	int i;
	int nb;

	i = 0;
	nb = 0;
	while (map[i] != NULL)
	{
		i++;
	}
	if (i < 1)
		return (0);
	nb = ft_atoi(line);
	if (nb != i)
		return(0);
	else
		return (1);
}

int	is_in_the_line(char c, char *line)
{
	int i;

	i = ft_strlen(line) - 3;
	while (line[i] != '\0')
	{
		if (c == line[i])
			return (1);
		i++;
	}
	return (0);
}

int	check_alpha(char **map, char *line)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (map[i] != NULL)
	{
		j = 0;
		while (map[i][j] != '\0' )
		{
			if (is_in_the_line(map[i][j], line))
				j++;
			else
				return (0);
		}
		i++;
:x
	return (1);
}

int	is_printable(char *line)
{
	int i;

	i = 0;
	while (line[i] != '\0')
	{
		if (line[i] >= 32 && line[i] <= 126)
			i++;
		else
			return (0);
	}
	return (1);
}
