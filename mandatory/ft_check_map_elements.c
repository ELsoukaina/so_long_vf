/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map_elements.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jala <sel-jala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 22:12:14 by sel-jala          #+#    #+#             */
/*   Updated: 2022/09/26 19:12:20 by sel-jala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_check_element_map(char **map, int nb_line)
{
	int	i;
	int	j;

	i = 0;
	while (i < nb_line)
	{
		j = 0;
		while (j < ft_strlen(map[i]))
		{
			if (map[i][j] != '1' && map[i][j] != '0' && map[i][j] != 'C' \
			&& map[i][j] != 'E' && map[i][j] != 'P' && map[i][j] != '\n')
				ft_print_message_error("Error\n invalid elements\n");
			j++;
		}
		i++;
	}
}

void	ft_check_player(char **map, int nb_lines, t_map *data)
{
	int	i;
	int	j;
	int	player;

	i = 0;
	player = 0;
	while (i < nb_lines)
	{
		j = 0;
		while (j < ft_strlen(map[i]))
		{
			if (map[i][j] == 'P')
			{
				player++;
				data->position_i = i;
				data->position_j = j;
			}
			j++;
		}
		i++;
	}
	if (player != 1)
		ft_print_message_error("Error\n So_long must have one Player\n");
}

void	ft_check_collectible(char **map, int nb_lines, t_map *data)
{
	int	i;
	int	j;

	i = 0;
	data->heart = 0;
	while (i < nb_lines)
	{
		j = 0;
		while (j < ft_strlen(map[i]))
		{
			if (map[i][j] == 'C')
				data->heart++;
			j++;
		}
		i++;
	}
	if (data->heart == 0)
		ft_print_message_error("Error\n Collectable doesn't exist\n");
}

void	ft_check_exit(char **map, int nb_lines, t_map *data)
{
	int	i;
	int	j;

	i = 0;
	data->exit = 0;
	while (i < nb_lines)
	{
		j = 0;
		while (j < ft_strlen(map[i]))
		{
			if (map[i][j] == 'E')
				data->exit++;
			j++;
		}
		i++;
	}
	if (data->exit == 0)
		ft_print_message_error("Error\n Exit doesn't exist");
}
