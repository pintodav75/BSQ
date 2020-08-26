/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davpinto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 16:51:56 by davpinto          #+#    #+#             */
/*   Updated: 2020/08/26 18:52:22 by davpinto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_atoi(char *str)
{
	int i;
	int res;
	int len;

	i = 0;
	res = 0;
	len = ft_strlen(str) - 3;
	while (str[i] >= '0' && str[i] <= '9' && i < len)
	{
		res = res * 10 + str[i] - 48;
		i++;
	}
	return (res);
}
