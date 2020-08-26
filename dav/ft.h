/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davpinto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 17:50:17 by davpinto          #+#    #+#             */
/*   Updated: 2020/08/26 18:17:47 by davpinto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
int	ft_strlen(char *str);
char	**ft_split(char *str, char *charset);
int	check_len_map(char **map, char *line);
int	check_strings_len(char **map);
int	ft_atoi(char *str);
int	check_alpha(char **map, char *line);
int	is_printable(char *line);
int	check_line(char *line);
#endif

