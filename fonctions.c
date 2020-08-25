/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonctions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davpinto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 17:48:56 by davpinto          #+#    #+#             */
/*   Updated: 2020/08/25 18:01:00 by davpinto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while(*str)
		write(1, str++, 1);
}

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}
