/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davpinto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/26 17:37:30 by davpinto          #+#    #+#             */
/*   Updated: 2020/08/26 19:18:53 by davpinto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	check_line(char *line)
{
	int i;
	int j;

	i = ft_strlen(line) - 3;
	while (line[i] != '\0')
	{
		j = i + 1;
		while (line[j] != '\0')
		{
			if (line[i] == line[j])
			{
				ft_putstr("c cho");
				return (0);
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (1);
}
